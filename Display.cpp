#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>
#include "Display.h"
#include "Player.h"
using namespace std;

/*渦嘐*/
void Display::ShowDied()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "YOU DIED";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      早" << endl;
	cout << "	     曲收收收收收收收收收收旭" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*渦嘐*/
void Display::ShowClear()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "CLEAR";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       早" << endl;
	cout << "	     曲收收收收收收收收收收旭" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

void Display::ShowStage1()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早       ";
	cout << "STAGE 1";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      早" << endl;
	cout << "	     曲收收收收收收收收收收旭" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage2()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早       ";
	cout << "STAGE 2";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      早" << endl;
	cout << "	     曲收收收收收收收收收收旭" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

void Display::ShowStage3()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早       ";
	cout << "STAGE 3";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "      早" << endl;
	cout << "	     曲收收收收收收收收收收旭" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(1500);
}

int Display::MainDisplay()
{
	cout << endl<<endl << "  旨收旬  旨收旬  旨收旬  旨收旬  旨收旬  旨收旬" << endl;
	cout << "  早      早      早      早";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "Ⅷ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "早  早  早  早" << endl;
	cout << "  曳收朽  曲收旬  早      曳收朽  曳收旭  曳收朽" << endl;
	cout << "  早          早  早      早  早  早      早" << endl;
	cout << "  曲收旭  曲收旭  曲收旭  朴  朴  朴      曲收旭" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "           旨旬旨旬  有  旨旬有  旨收旬" << endl;
	cout << "           早早早早  早  早早早  早" << endl;
	cout << "           早早早早  早  早早早  曳收朽" << endl;
	cout << "           早 ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "∪";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << " 早  早  早早早  早" << endl;
	cout << "           曲    旭  朴  朴曲旭  曲收旭" << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                璋濠蒂 殮溘ж撮蹂 " << endl;
	cout << "	     旨收收收收收收收收收收旬" << endl;
	cout << "	     早                    早" << endl;
	cout << "	     早                    早" << endl;
	cout << "	     早      1. START      早" << endl;
	cout << "	     早                    早" << endl;
	cout << "	     早      ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "              早" << endl;
	cout << "	     早      2. EXIT       早" << endl;
	cout << "	     早                    早" << endl;
	cout << "	     早                    早" << endl;
	cout << "	     曲收收收收收收收收收收旭";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "≠" << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                            made by 歎惜衝, 梯翕敘";

	int n;
	while (true)
	{
		n = _getch();
		if (n == '1' || n == '2') break;
	}
	system("cls");
	return n;
}

/* Щ煤煎斜 */
void Display::Prologue()
{
	system("cls"); // 罹ч擊 棻棲湍 輿檣奢擎 骨濛蝶楛 雖霞戲煎 檣п 惜骯縑 陘?鱁? 脹棻.
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	         (!@ ...樓爾殮#&..)";
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "        (..寞旎 瞪 %..儅и 雖霞&..煎.." << endl;
	cout << "                       ∞∞惜骯檜 鼠傘螺&#...@)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (∞∞$骯縑朝 婦惜偌 ^$@..貲檜.." <<endl;
	cout << "                      陘⑵氈.&#@.. ?挫庰Ц?戲貊)" << endl;
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "       (翮..%..貲檜 餌蜂ж艘#@戲煎.. " << endl;
	cout << "                    蹺薑ж堅 氈..#!@$%%@#)"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << endl << endl << "                    (褐?? 莒梯)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	             ...薯望!" << endl;
	Sleep(1500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "          檜溢啪 掘褻虜 晦棻溥疑濠.. "<<endl;
	cout << "                      掛橫 避晦虜 й剪撿.." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "                   < PROLOGUE >"<< endl << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	       ..橾欽 遺霜罹爾濠" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(2000);
}


/*婁棻轎⑸ 縛註*/
void Display::Ending1()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "              Я蒂 傘鼠 號檜 ?篞?棻...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	    薄薄 曖衝檜 ?撌謠鶼? 匙 偽棻...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	     羅廓簞 縛註 : 婁棻轎⑸";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}


/*婁嶸碳晝 縛註*/
void Display::Ending2()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	              .....";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	             瓔??!!!";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	      舒廓簞 縛註 : 婁嶸碳晝";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/* 陛衛縑 鎚萵陽 葬擋暮*/
void Display::ImPain()
{
	string str;
	bool pass = false;
	switch (Player::paincount)
	{
	case 3:
		str = "嬴暹!";
		break;
	case 4:
		str = "嬴だ蹂!";
		break;
	case 5:
		str = "傘鼠 嬴だ..";
		break;
	case 6:
		str = "斜虜...";
		break;
	case 7:
		str = "斜楝雖 蜓嬴蹂..";
		break;
	case 8:
		str = "薯嫦...";
		break;
	case 9:
		str = "髦溥輿撮蹂...";
		break;
	case 10:
		str = "....";
		break;
	default:
		pass = true;
		break;
	}
	if (pass) return;

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout <<" 	               " << str;
	Sleep(1500);
}

/*濠髦 縛註*/
void Display::Ending3()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             ....";
	Sleep(1500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "           渡褐 橾睡楝 斜楝衛朝剪轄...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "   橫瞼Я 啪歜檜棲梱 鼻婦橈棻堅 斜楝衛朝剪轄...";
	Sleep(2500); 

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "         渡褐擎 薑蜓 濤檣и 餌塋檜捱蹂...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "          渡褐擊 艙錳?? 盪輿ж啊橫蹂...";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             (ヰ蔥)";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	             SUICIDE";//濠髦擎 か熱 縛註
	cout << "	           撮廓簞 縛註 : 濠髦";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}

/*辨晦煽 縛註*/
void Display::Ending4()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	                !!";
	Sleep(1500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "          (嬴腦顫棲蝶曖 嫦擊 嫖擎 匙 偽棻.)";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "        嬴腦顫棲蝶 : 馬?? 頂 嫦擊 嫖棻棲!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << " 嬴腦顫棲蝶 : 盪喪戮擊 渡濰 辨晦煽戲煎 虜菟橫塭!!";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "           換擊 集爾棲 離陛遴 僭 樓縑憮" <<endl;
	cout << "         溶鍔煎 瞪爵攪蒂 夥塭爾堅 氈歷棻.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	       AM I REALY DIED?!?!?!?"<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "	        啻廓簞 縛註 : 辨晦煽";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);

}

/*憶餌 縛註*/
void Display::Ending5()
{
	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "	                !!";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "                嬴檜蠱擎 л薑檜歷棻.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          繭濰檜 薄薄 釭蒂 щп 頂溥螞棻.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "          螞 跺檜 戲蝶楝雖朝啪 替硫霞棻.";
	Sleep(2500);

	system("cls");
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "	            YOU DIED" << endl;
	cout << "               棻撓廓簞 縛註 : 憶餌";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
	Sleep(2500);
}

/* 喻詩 縛註 : 驍轎*/
void Display::Ending6()
{
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "           詩葬憮 維檜 爾檜晦 衛濛и棻.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "      釭朝 菴紫 給嬴爾雖 彊堅 擅戲煎 殖溥鬲棻.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout <<"                   夤戲煎 釭螃棲"<< endl;
	cout <<"      掘褻渠錳菟檜 啾塢 ル薑戲煎 釭蒂 等溥鬲棻.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl<< endl;
	cout << "	               End"<<endl;
	cout << "             鼠餌?? 煽錳戲煎 螞 釭朝"<< endl;
	cout << "          陛褶菟擊 棻衛 虜陳 熱 氈歷棻.";
	Sleep(2500);

	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "	             The End ?";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}