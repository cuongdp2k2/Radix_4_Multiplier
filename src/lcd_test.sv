/* verilator lint_off IMPLICIT */
/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSED */
/* verilator lint_off WIDTH */
module	lcd_test (
// Host Side
  input clk_i,iRST_N,
  input [19:0] idata,
  input sign,
// LCD Side
  output [7:0] 	LCD_DATA,
  output LCD_RW,LCD_EN,LCD_RS	
);
//	Internal Wires/Registers
reg	[5:0]	LUT_INDEX;
reg	[8:0]	LUT_DATA;
reg	[5:0]	mLCD_ST;
reg	[17:0]	mDLY;
reg		mLCD_Start;
reg	[7:0]	mLCD_DATA;
reg		mLCD_RS;
wire		mLCD_Done;

reg 	[31:0] counter;
reg			 status;


parameter	LCD_INTIAL	=	0;
parameter	LCD_LINE1	=	5;
parameter	LCD_CH_LINE	=	LCD_LINE1+16;
parameter	LCD_LINE2	=	LCD_LINE1+16+1;
parameter	LUT_SIZE	=	LCD_LINE1+32+1;




always@(posedge clk_i or negedge iRST_N)
begin
	if(!iRST_N)
	begin
		LUT_INDEX	<=	0;
		mLCD_ST		<=	0;
		mDLY		<=	0;
		mLCD_Start	<=	0;
		mLCD_DATA	<=	0;
		mLCD_RS		<=	0;
	end
	else
	begin
		if(LUT_INDEX<LUT_SIZE)
		begin
			case(mLCD_ST)
			0:	begin
					mLCD_DATA	<=	LUT_DATA[7:0];
					mLCD_RS		<=	LUT_DATA[8];
					mLCD_Start	<=	1;
					mLCD_ST		<=	1;
				end
			1:	begin
					if(mLCD_Done)
					begin
						mLCD_Start	<=	0;
						mLCD_ST		<=	2;					
					end
				end
			2:	begin
					if(mDLY<18'h3FFFE)
					mDLY	<=	mDLY + 1'b1;
					else
					begin
						mDLY	<=	0;
						mLCD_ST	<=	3;
					end
				end
			3:	begin
					LUT_INDEX	<=	LUT_INDEX + 1'b1;
					mLCD_ST	<=	0;
				end
			endcase
		end
	end
end

always@(posedge clk_i)
begin
	case(LUT_INDEX)
	//	Initial
	LCD_INTIAL+0:	LUT_DATA	<=	9'h038;
	LCD_INTIAL+1:	LUT_DATA	<=	9'h00C;
	LCD_INTIAL+2:	LUT_DATA	<=	9'h001;
	LCD_INTIAL+3:	LUT_DATA	<=	9'h006;
	LCD_INTIAL+4:	LUT_DATA	<=	9'h080;
	//	Line 1
	LCD_LINE1+0:	LUT_DATA	<=	sign ? 9'h12D : 9'h12B;	//	DS: Data Sent
	LCD_LINE1+1:	LUT_DATA	<=	9'h130 + idata[19:16];
	LCD_LINE1+2:	LUT_DATA	<=	9'h130 + idata[15:12];
	LCD_LINE1+3:	LUT_DATA	<=	9'h130 + idata[11:8];
	LCD_LINE1+4:	LUT_DATA	<=	9'h130 + idata[7:4];
	LCD_LINE1+5:	LUT_DATA	<=	9'h130 + idata[3:0];
	LCD_LINE1+6:	LUT_DATA	<=	9'h120;
	LCD_LINE1+7:	LUT_DATA	<=	9'h120;
	LCD_LINE1+8:	LUT_DATA	<=	9'h120;
	LCD_LINE1+9:	LUT_DATA	<=	9'h120;
	LCD_LINE1+10:	LUT_DATA	<=	9'h120;
	LCD_LINE1+11:	LUT_DATA	<=	9'h120;
	LCD_LINE1+12:	LUT_DATA	<=	9'h120;
	LCD_LINE1+13:	LUT_DATA	<=	9'h120;
	LCD_LINE1+14:	LUT_DATA	<=	9'h120;
	LCD_LINE1+15:	LUT_DATA	<=	9'h120;
	//	Change Line
	LCD_CH_LINE:	LUT_DATA	<=	9'h0C0;
	//	Line 2
	LCD_LINE2+0:	LUT_DATA	<=	status ? 9'h120 : 9'h12E;	//	Nice To See You!
	LCD_LINE2+1:	LUT_DATA	<=	9'h120;
	LCD_LINE2+2:	LUT_DATA	<=	9'h120;
	LCD_LINE2+3:	LUT_DATA	<=	9'h120;
	LCD_LINE2+4:	LUT_DATA	<=	9'h120;
	LCD_LINE2+5:	LUT_DATA	<=	9'h120;
	LCD_LINE2+6:	LUT_DATA	<=	9'h120;
	LCD_LINE2+7:	LUT_DATA	<=	9'h120;
	LCD_LINE2+8:	LUT_DATA	<=	9'h120;
	LCD_LINE2+9:	LUT_DATA	<=	9'h120;
	LCD_LINE2+10:	LUT_DATA	<=	9'h120;
	LCD_LINE2+11:	LUT_DATA	<=	9'h120;
	LCD_LINE2+12:	LUT_DATA	<=	9'h120;
	LCD_LINE2+13:	LUT_DATA	<=	9'h120;
	LCD_LINE2+14:	LUT_DATA	<=	9'h120;
	LCD_LINE2+15:	LUT_DATA	<=	9'h120;
	default:		LUT_DATA	<=	9'dx ;
	endcase
end


always@(posedge clk_i)
begin
	if (counter == 2**31)
	begin
		counter <= 0;
		status <= ~status;
	end
	else
	begin
		counter <= counter + 1;
	end
end

lcd_controller u0(
//    Host Side
.iDATA(mLCD_DATA),
.iRS(mLCD_RS),
.iStart(mLCD_Start),
.oDone(mLCD_Done),
.clk_i(clk_i),
.iRST_N(iRST_N),
//    LCD Interface
.LCD_DATA(LCD_DATA),
.LCD_RW(LCD_RW),
.LCD_EN(LCD_EN),
.LCD_RS(LCD_RS)    );

endmodule
