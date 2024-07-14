//#include <iostream>
////转义字符: \
////作用1：配合某些特殊字符使用，使其变成普通字符
////作用2：配合某些特定的普通字符使用，代表某些特殊含义
///*
//	转义字符			意义									ASCII码值（十进制）
//
//	\a				响铃(BEL)							007
//
//	\b				退格(BS) ，将当前位置移到前一列		008
//
//	\f				换页(FF)，将当前位置移到下页开头		012
//
//	\n				换行(LF) ，将当前位置移到下一行开头	010
//
//	\r				回车(CR) ，将当前位置移到本行开头		013
//
//	\t				水平制表(HT) （跳到下一个TAB位置）		009
//
//	\v				垂直制表(VT)							011
//
//	\\				代表一个反斜线字符''\'				092	
//
//	\'				代表一个单引号（撇号）字符				039
//
//	\"				代表一个双引号字符					034
//
//	\?				代表一个问号							063
//
//	\0				空字符(NULL)	标志着字符串的结束		000
//					输出字符时如果出现空字符，则输出结束
//
//	\ddd			1到3位八进制数所代表的任意字符		三位八进制
//
//	\xhh			1到2位十六进制所代表的任意字符		二位十六进制
//*/
//
///*
//\ddd 和 \xhh 都是转义字符，用于表示一个字符。
//	\ddd 表示由1到3位八进制数字组成的字符。这里的 ddd 可以是1到3个八进制数字（范围从0到7），它们组合起来表示ASCII或Unicode字符集中的一个字符。例如：
//
//	\101 代表十进制中的65，即大写字母 'A'。
//	\41 同样代表大写字母 'A'。
//
//	\xhh 表示由1到2位十六进制数字组成的字符。这里的 hh 可以是1或2个十六进制数字（范围从0到F），它们组合起来表示一个字符。例如：
//
//	\x41 代表十六进制中的41，即大写字母 'A'。
//	\xA 同样代表大写字母 'A'。
//*/
//int main()
//{
//  printf("Hello World\a\n");
//  printf("Hello World\b\n");
//  printf("Hello World\f\n");
//  printf("Hello World\n\n");
//  printf("Hello World\r\n");
//  printf("Hello World\t\n");
//  printf("Hello World\\\n");
//  printf("Hello World\'\n");
//  printf("Hello World\"\n");
//  printf("Hello World\?\n");
//  printf("Hello World\0\n");
//  printf("Hello World\n");
//
//  printf("Hello World\101\n");
//  printf("Hello World\102\n");
//  printf("Hello World\103\n");
//
//  printf("Hello World\x07\n");
//  printf("Hel\x000loWorld\n");
//
//  return 0;
//}
