/*********************************************************************************************************
 *                                     Author Andrey Brushchenko                                         *
 *                      Random program demonsrates structure programming in C++                          *
 *********************************************************************************************************/
#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <fstream>
#include <array>
#include <algorithm>
#include <ctime>
//#include <cwchar>
#include <signal.h>
#include <locale.h>
#pragma inline
#define PI  3.141592653589793
#define MULT(x,y)(x*y)
#define SUM(x,y)(x+y)
#define DIV(x,y)(x/y)
#define SUB(x,y)(x-y)
using namespace std;
static void SignalHandler(int iID)
{  cout<<"ID: "<<iID<<endl;
}
void circle (int rad=7, int centX=10, int centY=10) {
	 	for(int i=0;i<10;i++)
	    cout<<"Input parameters\t";
	    SetCursorPos(centX++,centY);
	                                                }
void RegisterSignals()
{  signal(SIGINT, SignalHandler);
   signal(SIGILL, SignalHandler);
   signal(SIGFPE, SignalHandler);
   signal(SIGSEGV, SignalHandler);
   signal(SIGTERM, SignalHandler);
   signal(SIGBREAK, SignalHandler);
   signal(SIGABRT, SignalHandler);
}
int main(int argc, char* argv[])
{   setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    system("chcp 1251>0");
    wprintf(L" Привет\n");
    for (int k=0; k<argc;k++)
     {
	 cout<<argv[k]<<endl;
     };
  // link:
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The local date and time is: "<<dt<<endl;
    cout<<'\a';
    int a = 5, b = 6;
    float deg;
    string keyword;
    setlocale(LC_CTYPE, "Russian_Russia.1251");
    system("color F0");
    int WINAPI WinMain(
   _In_ HINSTANCE hInstance,
   _In_opt_ HINSTANCE hPrevInstance,
   _In_ LPSTR     lpCmdLine,
   _In_ int       nCmdShow
    );
    printf("%s%d%s%d\n","Input a = ",a," Inrut b = ",b);
	for (a=5; a>=0; a--) {
        printf("%d\n", a);
                         };
    printf("Press TAB and ENTER to get a and b Address. If a less then b You'll see red screen. Program will stop, if you want to print text do it. To erase sting press ESC. \n");
   const int ESC = 27, TAB = 9;
    int *p = &a, *e = &b;
    if (p ==&b)
        return 0;
    char c;
    bool m= true;
    string l;
    while (getline(cin,l)&&m)
    {
        c = cin.get();
        switch (c) {
          case ESC: break;
          case TAB:
            printf("%s%p%s%p\n", "Address a:", p, " Address b:", e);
            m = false;
                   }
    }
    //system("pause");
    printf("Input new values for a and b\n");
    cin>>a;
    printf("%s%d\n","a = ", a);
    cin>>b;
    printf("%s%d\n","b = ", b);
    double z;
    z=(a*a-(2*b))/a + sqrt(b)-(3*a*b*sqrt(a));
    printf("%s%d\n","z=",z);
    system("pause");
    system("cls");
    printf("Forget what have you done before!!!\n");
    printf("Having the pleasant taste characteristic of sugar or honey; not salt, sour, or bitter. A cup of hot sweet tea\n");
    string days[7] = {"Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday"};
    //goto link;
    for (int i=0;i<=7;i++) {
    cout<<days[i]<<endl;
    cout<<l<<"a="<<a<<"\n"<<"b="<<b<<"\n";
                           }
    if (a>b) {
	printf("Inputed a is bigger then b. You must print text\n");
	system("color F2");
	cin>>l;
	         }
	else system("color C0");
	cout<<'\a';
	m=true;
	getch();
	class Books {
	public: int amount;
	        int year;
	        string name;
	        string author;
	private: string describ;
	         int price;
		void show()
       { cout<<"amount is: "<<amount<<"year is: "<<year<<"name is: "<<name<<"author is: "<<author;}
       	       };
    int main();
	{
	Books obj1;
	Books page;
	obj1.year = 120;
	obj1.amount= 5;
	page.amount = 607;
	obj1.author = "Ernest Hemingway";
	obj1.name = "Farewell to Arms";
	printf("%s%i\t%i\t","YES BookYear and Amount:\t",obj1.year,obj1.amount);
	cout<<obj1.author<<"\t"<<obj1.name<<"\n";
	system("pause");
	}
    system("cls");
       a=1;
	   ifstream in("E:\\Eng.txt");
	   if (in.is_open())
	        { while (getline(in,l))
	        {cout<<a<<"\t"<<l<<endl;a++;}
	        }
	   in.close();
	   cout<<"End of program"<<endl;
	   system("Color 1F");
	   system("pause");
	   system("Color E0");
	   float x,y;
	   cout<<"This is calculator. Input equation, for example: a+b"<<endl;
	   cin>>x>>c>>y;
	  // while (getline(cin,l)&&m) {
		//c=cin.get();
	   switch (c) {
	   	case 42: MULT(x,y); cout<<x<<c<<y<<"="<<MULT(x,y)<<endl;break;
	   	case 43: SUM(x,y);  cout<<x<<c<<y<<"="<<SUM(x,y)<<endl;break;
	   	case 45: SUB(x,y);  cout<<x<<c<<y<<"="<<SUB(x,y)<<endl;break;
	   	case 47: DIV(x,y);  cout<<x<<c<<y<<"="<<DIV(x,y)<<endl;break;
	   	m=false;
	              }
	   cout<<MULT(x,y)<<"\t"<<"If not operator a:"<<not a<<endl;
	   for(int t=0; t<5; t++) {
	   		cout<<"First cycle\t"<<"t"<<"="<<t<<endl;
	   	for(int r=0; r<5; r++){
	    cout<<"Second cycle\t"<<"r"<<"="<<r<<endl;
	                          }
	    printf("Press any key\n");
	    getch();  
		          }
	   system("cls");
	      for (int v=0; v<20; v++){
	      link:
		  system("color 20");
		  printf("WAIT!!!\n");
		  for(int w=0; w>v; w++) {
		        goto link;
			                     }
		  system("color 8F");
		  sleep (1);
	                             }
	int *arr;
	int size=100000;
	keyword = "RUNTIME_ERROR";
	static_cast<long int>(y);
	y=17800;
	cout <<"Four in four power is: "<< pow (4.0,4.0)<< "\t" << y <<"$"<< endl;
	array<int, 10> s={6,7,1,5,8,4,3,9,0,2};
	cout<<"Array before sort:  ";
	for(int i=0;i<10;i++)
    cout<<s[i];
	sort (s.begin(), s.end());
	cout<<endl;
	cout<<"Array after sort:   ";
	for(int i=0;i<10;i++)
	   cout<<s[i];
	   cout<<endl;
	RegisterSignals();
   /* int *pi;
    *pi=0;
    unlink;
    if (SignalHandler){*/
    sleep(1);
    class Football {
	public:  array<string,10000> team;
	         string palyer;
	         array<string,200> country;
	         //Football(string name): pName_ (new string(name)) {}
	         ~Football() { delete pName_;}
	        string* pName_;
    private:  int year;
	          void print(array<string,10000> h) {h=team;}
                   };
int main();
    {Football UCL;
     Football Europe_Ligue;
     Football World_Cup;
     Football Europe_Cup;
     Football EPL;
     UCL.team = {"Real Madrid","Juventus","Manchester United","Barcelona","Chelsea","Liverpool","Atletico Madrid","AC Milan","Bayern Munich","Borussia Dortmund","Manchester City","Arsenal","P.S.G.","Ajax","Porto","Dynamo Kyiv","Shakhtar Donetsk","Inter Milan","Galatasaray"};
     World_Cup.country = {"Afghanistan","Albania","Algeria","Andorra","Angola","Antigua and Barbuda","Argentina","Armenia","Australia","Austria","Azerbaijan","Bahamas, The","Bahrain","Bangladesh","Barbados","Belarus","Belgium","Belize","Benin","Bhutan","Bolivia","Bosnia and Herzegovina","Botswana","Brazil","Brunei","Bulgaria","Burkina Faso","Burma","Burundi","Cabo Verde","Cambodia","Cameroon","Canada","Central African Republic","Chad","Chile","China","Colombia","Comoros","Congo (Brazzaville)","Congo (Kinshasa)","Costa Rica","Cote d'Ivoire","Croatia","Cuba","Cyprus","Czechia","Denmark","Djibouti","Dominica","Dominican Republic","Ecuador","Egypt","El Salvador","Equatorial Guinea","Eritrea","Estonia","Eswatini","Ethiopia","Fiji","Finland","France","Gabon","Gambia, The","Georgia","Germany","Ghana","Greece","Grenada","Guatemala","Guinea","Guinea-Bissau","Guyana","Haiti","Holy See","Honduras","Hungary","Iceland","India","Indonesia","Iran","Iraq","Ireland","Israel","Italy","Jamaica","Japan","Jordan","Kazakhstan","Kenya","Kiribati","Korea, North","Korea, South","Kosovo","Kuwait","Kyrgyzstan","Laos","Latvia","Lebanon","Lesotho","Liberia","Libya","Liechtenstein","Lithuania","Luxembourg","Madagascar","Malawi","Malaysia","Maldives","Mali","Malta","Marshall Islands","Mauritania","Mauritius","Mexico","Micronesia, Federated States of","Moldova","Monaco","Mongolia","Montenegro","Morocco","Mozambique","Namibia","Nauru","Nepal","Netherlands","New Zealand","Nicaragua","Niger","Nigeria","North Macedonia","Norway","Oman","Pakistan","Palau","Panama","Papua New Guinea","Paraguay","Peru","Philippines","Poland","Portugal","Qatar","Romania","Russia","Rwanda","Saint Kitts and Nevis","Saint Lucia","Saint Vincent and the Grenadines","Samoa","San Marino","Sao Tome and Principe","Saudi Arabia","Senegal","Serbia","Seychelles","Sierra Leone","Singapore","Slovakia","Slovenia","Solomon Islands","Somalia","South Africa","South Sudan","Spain","Sri Lanka","Sudan","Suriname","Sweden","Switzerland","Syria","Tajikistan","Tanzania","Thailand","Timor-Leste","Togo","Tonga","Trinidad and Tobago","Tunisia","Turkey","Turkmenistan","Tuvalu","Uganda","Ukraine","United Arab Emirates","United Kingdom","United States","Uruguay","Uzbekistan","Vanuatu","Venezuela","Vietnam","Yemen","Zambia","Zimbabwe"};
    for (int i=0;i<12;i++)
     	cout<<i+1<<"  "<<UCL.team[i]<<endl;
     	cout<<endl;
	for (int i=0;i<200;i++)
	    cout<<i+1<<"   "<<World_Cup.country[i]<<endl;
		cout<<sizeof(World_Cup.country)<<"    "<<sizeof(UCL.team)<<endl;
     getch();
    }
     cin.get();
	 long int n, q, g;
	 int zero = 0;
	 int num = 1;
	 double sum, mult;
	 for(n=-2147;n<2147;n++){
	 y=n*n;
	 cout<<"n =  "<<n<<"  "<<"y = "<<y<<endl;}
	 /*for(q=-2147;q<n;q++){cout<<"q= "<<q<<endl;
	 for(g=-2147;g<q;g++){cout<<"g= "<<g<<endl;
	  sum=n+q+g;
	  mult=n*q*g; break;
	 cout<<sum<<"    "<<mult<<endl; if (sum=mult) break;cout<<n<<" "<<q<<" "<<g<<"  "<<sum<<" "<<mult;} }}      */
	 circle(6,6,6);
	 printf("%d %s \n", argc, *argv);
	 deg=PI/180;
	 round(deg*10000)/10000;
	 for (n=0; n<=360; n++) {
	 cout<<"Cosine "<<n<<" degrees is : "<<cos(n*deg)<<endl;
                            }
    sleep(1);
     for (n=0;n<=300;n++) {
     	time_t now = time(0);
        char *dt = ctime(&now);
     	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t"<<dt<<endl;
     	sleep(1);
	    system("cls");    }   
		bool alive=true;
		bool each=false; 
	for (each; each&&alive; !alive&&alive&&num&&zero) {
	     printf("%i",a^b);      }
	     cout<<keyword;
return 0;
}
