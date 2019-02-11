#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<ctype.h>
void playzone();
void scoreboard();
void help();

 main()
{
    
         char ch;
     		system("cls"); 
     		puts("\n\t-------------------------------\n\n") ;
     		puts("\n\t\tWELCOME TO QUIZ CHALLENGE\n\n") ;
     		puts("\n\t-------------------------------");
     		puts("\n\t\t PLAY->'P'");
     		puts("\n\t\t SCORE->'S'");
     		puts("\n\t\t HELP->'H'");
     		puts("\n\t\t QUIT->'Q'");
     		printf("\n\n\\t\tENTER YOUR CHOICE:\t ");
     		ch=toupper(getch()); 
      if (ch=='P')
              { playzone();
               main();}
      else if(ch=='S')
               scoreboard();
     else if(ch=='H')
              { help();
                getch();
               main();}
     else
               exit(1);
     getch();
}




 void playzone()
{
     int ques,ans;
     time_t time1,finaltime;
     int r,i;
     float score;
     char choice;
     char name[20];
     ques=0;
     ans=0;
     
     do
       {
	system("cls");
	printf("\t\t----------------\n");
	printf("\t\tPLAY ZONE\n");
	printf("\t\t----------------\n");
	printf("\n\t ENTER YOUR NAME");
	gets(name);
	time1=time(NULL);
	srand(time(NULL));
	for(i=1;i<=20;i++)
	{
		r=rand()%100;
		switch(r)
	{case 1:
	 printf("\n\n\nWhat is the height of Mount everest in feet?");
 	 printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
 	 ques++;
 	 if (toupper(getch())=='D')
 	  {printf("\n\nCorrect!!!");ans++; break;}
 	 else
         {printf("\n\nWrong!!! The correct answer is D.8848");break;}

	case 2:
 	printf("\n\n\nWhich Nepali Newspaper was the first to access on net?");
 	 printf("\n\nA.The Annapurna Post\tB.Kantipur Post\n\nC.The kathmandu    post\tD.The himalayan times\n\n");
  	ques++;
 	 if (toupper(getch())=='C')
  	 {printf("\n\nCorrect!!!");ans++; break;}
 	 else
         {printf("\n\nWrong!!! The correct answer is C.The kathmandu post");break;}
	case 3:
	printf("\n\n\nWhen was UN established?");
 	 printf("\n\nA.1955\tB.1945\n\nC.1951\tD.1946\n\n");
  	ques++;
  	if (toupper(getch())=='B')
 	  {printf("\n\nCorrect!!!");ans++; break;}
 	 else
         {printf("\n\nWrong!!! The correct answer is B.1945");break;}
case 4:
 printf("\n\n\nWho wrote the book 'Long Walk for Freedom'?");
  printf("\n\nA.Nelson Mandala\tB.King Jr. Luther\n\nC.Abraham Lincon\tD.Mahatma Gandi\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Nelson Mandala");break;}

case 5:
 printf("\n\n\nWhat is\are the official language of UN?");
  printf("\n\nA.English\tB.French\n\nC.None\tD.Both\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.both");break;}

case 6:
 printf("\n\n\nIn Football who's'the last line of defence:first line of attack'?");
  printf("\n\nA.striker\tB.forwarder\n\nC.fielder\tD.goalkeeper\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.goal keeper");break;}

case 7:
 printf("\n\n\nWhich game is known as 'Royal Game'?");
  printf("\n\nA.Cricket\tB.Chess\n\nC.Football\tD.Batminton\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.chess");break;}

case 8:
 printf("\n\n\nWho's the writer of My Life and a Beautiful Game?");
  printf("\n\nA.Marodona\tB.Pele\n\nC.Ronaldino\tD.Rolnaldo\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.pele");break;}

case 9:
 printf("\n\n\nWhich game is known as Tour of France?");
  printf("\n\nA.bike racing\tB.cycling\n\nC.boating\tD.swiming\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Cycling");break;}

case 10:
 printf("\n\n\nWhat was the height of Dharahara in meters?");
  printf("\n\nA.100.56\tB.71.75\n\nC.61.88\tD.54.23\n\n");
  ques++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.61.88");break;}

case 11:
 printf("\n\n\nWha percentage of nepal is occupied by water?");
  printf("\n\nA.21.3\tB.2.8\n\nC.8.1\tD.3.5\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.2.8");break;}

case 12:
 printf("\n\n\nIn what script is Nepali langauge written?");
  printf("\n\nA.Sanskrit\tB.Hindi\n\nC.Nepali\tD.Devnagari\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.devnagari");break;}

case 13:
 printf("\n\n\nWho was the first elected prime minister of Nepal?");
  printf("\n\nA.Sher bahadur\tB.GP koirala\n\nC.BP koirala\tD.KP Bhattarai\n\n");
  ques++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.BP Koirala");break;}

case 14:
 printf("\n\n\nWho was the first king of Malla dynasty?");
  printf("\n\nA.Bhim malla\tB.Ari malla\n\nC.malla malla\tD.Ram Malla\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Ari Malla");break;}

case 15:
 printf("\n\n\nWhat year was Tribhuwan University established?");
  printf("\n\nA.1961\tB.1959\n\nC.1960\tD.1958\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.1959");break;}

case 16:
 printf("\n\n\nPashupati was built by?");
  printf("\n\nA.Pashupati shumsher\tB.Bhimsen Thapa\n\nC.Prithvi Narayan\tD.Prachanda dev\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Prachanda dev");break;}

case 17:
 printf("\n\n\nWhen was nepal declared as Republic?");
  printf("\n\nA.2010\tB.2006\n\nC.2007\tD.2008\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.2008");break;}

case 18:
 printf("\n\n\nWhat was the gift from hilter to Nepal's King?");
  printf("\n\nA.Car\tB.Knife\n\nC.diamond\tD.Gun\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.car");break;}

case 19:
 printf("\n\n\nWhat year was Radio Nepal established?");
  printf("\n\nA.1955\tB.1951\n\nC.1945\tD.1999\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.1951");break;}

case 20:
 printf("\n\n\nWhat year did Nepal joined UN?");
  printf("\n\nA.1967\tB.1955\n\nC.1965\tD.1945\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.1955");break;}

case 21:
 printf("\n\n\nWhat part of the body does a turtle use to breathe?");
  printf("\n\nA.Anus\tB.Mouth\n\nC.Belly\tD.Shell\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Anus");break;}

case 22:
 printf("\n\n\nWhen was Bir Hospital established?");
  printf("\n\nA.1947 BS\tB.1974 BS\n\nC.2047 BS\tD.2055\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.1947");break;}

case 23:
 printf("\n\n\nWorld pipulation day celebrates on?");
  printf("\n\nA.dec 11\tB.july 11\n\nC.march 15\tD.october 20\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.July 11");break;}

case 24:
 printf("\n\n\nHow many bones are there invertbrate?");
  printf("\n\nA.33\tB.32\n\nC.31\tD.30\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.33");break;}

case 25:
 printf("\n\n\n	Which is the first film in Nepali Language?");
  printf("\n\nA.Moti\tB.Harischandra\n\nC.Kumari\tD.Ama\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Harischandra");break;}

case 26:
 printf("\n\n\n	Which is the first bank in nepal?");
  printf("\n\nA.Nepal Rastra Bank\tB.Nepal Bank ltd\n\nC.Kist bank\tD.Kumari bank\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Nepal bank ltd");break;}

case 27:
 printf("\n\n\nWhich is the oldest temple of wood in nepal?");
  printf("\n\nA.Pashupatinath\tB.Kasthamandap\n\nC.Changunarayan\tD.Kumari\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Kasthamandap");break;}

case 28:
 printf("\n\n\nWhich is the real name of Janak?");
  printf("\n\nA.Shiridoj\tB.Kashinath\n\nC.Krishna\tD.Devdutta\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Shiridhoj");break;}

case 29:
 printf("\n\n\nWho was the last king of bhaktapur?");
  printf("\n\nA.Siddinar singh malla\tB.Ranajit malla\n\nC.Mandev\tD.Jaya Prakash Malla\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Ranajit malla");break;}

case 30:
 printf("\n\n\nWhich is the oldest bank of nepal?");
  printf("\n\nA.ADB\tB.Nepal Bank\n\nC.Laxmi bank\tD.Kumari bank\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Nepal bank");break;}

case 31:
 printf("\n\n\nFrom which country started Newspaper?");
  printf("\n\nA.China\tB.Japan\n\nC.India\tD.UK\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.China");break;}

case 32:
 printf("\n\n\nWho is the first poet of world?");
  printf("\n\nA.Sukarat\tB.Homer\n\nC.Bhanubhakta\tD.Rabindranath Tagore\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Homer");break;}

case 33:
 printf("\n\n\nWhere is suka taal of nepal??");
  printf("\n\nA.Palpa\tB.Sunsari\n\nC.Chitwan\tD.Surkhet\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Palpa");break;}

case 34:
 printf("\n\n\n	Which country introduced democracy?");
  printf("\n\nA.China\tB.USA\n\nC.UK\tD.Brazil\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.USA");break;}

case 35:
 printf("\n\n\nWho was first english teacher of nepal?");
  printf("\n\nA.Gauruddhoj rana\tB.judda samser\n\nC.gurupatak karki\tD.puspakamalacharya\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Gauruddhoj rana");break;}

case 36:
 printf("\n\n\n	Which is the national game of china?");
  printf("\n\nA.Polo\tB.Table Tennis\n\nC.Cricket\tD.Football\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Table Tennis");break;}

case 37:
 printf("\n\n\nWho is the yug kavi of nepal?");
  printf("\n\nA.Laxmiprasad Devkota\tB.Bhanubakta Acharya\n\nC.Balkrishna sam\tD.Siddicharan Shrestha\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.Siddicharn shrestha");break;}

case 38:
 printf("\n\n\nWhen did sagarmatha found?");
  printf("\n\nA.1952 AD\tB.1955 AD\n\nC.1953 AD\tD.1950 AD\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.1952 AD");break;}

case 39:
 printf("\n\n\nWho was the father of karna?");
  printf("\n\nA.Ram\tB.Surya\n\nC.Vyas\tD.Indra\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Surya");break;}

case 40:
 printf("\n\n\nWho found the lumbini?");
  printf("\n\nA.Ramashah\tB.Ashok\n\nC.Admond\tD.Gautam buddha\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Ashok");break;}

case 41:
 printf("\n\n\n	What is the full form of ATM?");
  printf("\n\nA.Any time money\tB.Automated teller macine\n\nC.Automatic teller machine\tD.Amounted teller machine\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.Automated teller machine");break;}

case 42:
 printf("\n\n\nAt a conference, 12 members shook hands with each other before & after the meeting. How many total number of hand shakes occurred??");
  printf("\n\nA.100\tB.132\n\nC.144\tD.121\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.132");break;}

case 43:
 printf("\n\n\nThe day after the day after tomorrow is four days before Monday. What day is it today?");
  printf("\n\nA.Monday\tB.Tuesday\n\nC.Wednesday\tD.Thursday\n\n");
  ques++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Monday");break;}

case 44:
 printf("\n\n\n6121135 is to flame as 21215120 is to ?");
  printf("\n\nA.voice\tB.baid\n\nC.bloat\tD.castle\n\n");
  ques++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.bloat");break;}

case 45:
 printf("\n\n\nForest is to tree as tree is to?");
  printf("\n\nA.plant\tB.leaf\n\nC.branch\tD.mangrove\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.leaf");break;}

case 46:
 printf("\n\n\nBook is to Reading as Fork is to:?");
  printf("\n\nA.drawing\tB.writing\n\nC.stirring\tD.eating\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.eating");break;}

case 47:
 printf("\n\n\nWhich of the following can be arranged into a 5-letter english word?");
  printf("\n\nA.H R G S T\tB.R I L S A\n\nC.T O O R T\tD.W Q R G S\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.RAILS");break;}

case 48:
 printf("\n\n\nWhich number should come next in the series 1-1-2-3-5-8-13?");
  printf("\n\nA.15\tB.21\n\nC.26\tD.31\n\n");
  ques++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.21");break;}

case 49:
 printf("\n\n\nWho discovered India?");
  printf("\n\nA.Marco Polo\tB.Vasa de gama\n\nC.Christopher Columbus\tD.General Robert\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.");break;}

case 50:
 printf("\n\n\nChoose the word most similar to 'trustworthy'?");
  printf("\n\nA.Resolute\tB.Tenacity\n\nC.Insolet\tD.Reliable\n\n");
  ques++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");ans++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.reliable");break;}


 }}
 finaltime=time(NULL);
 score=(float)ans/ques*100-difftime(finaltime,time1)/3;
 if (score<0) score=0;
 printf("\n\n\nYour Score: %.2f",score);
 if (score==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (score>=80 && score<100) printf("\n\nVERY GOOD!!");
 else if (score>=60 &&score<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (score>=40 && score<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN G.K.,WORK HARD");

 FILE *f;
 
     f=fopen("score.txt","a");
     fprintf(f,"\n%shas scored%.2f",name,score);
     fclose(f);
 puts("\n\nNEXT PLAY?(Y/N)");
}while(toupper(getch())=='Y');
 main();}

void help()
{
system("cls");
 printf("\n\t\t\t\t\t\t----------");
 printf("\n\t\t\t\t\t\t  HELP");
 printf("\n\t\t\t\t\t\t----------");
 printf("\n\tThis game is very easy to play. There are several questions to which you need to answer and");
 printf("\ntofcourse tehere are four option to every question. There score will be calculated at the end of");
 printf("\n\tseveral questions.Remember that the later you answer the question lesser you will score. If");
 printf("\n\tyou secure the highest score then it will be recorded in the SCORE BOARD");
 printf("\n\t\t\t\t\t**************BEST OF LUCK**************");
}
void scoreboard()
 {
 char name[20];
 float s;
 char c;
 FILE *f;
 system("cls");
 f=fopen("score.txt","r");
 while((c=fgetc(f))!=EOF)
putchar(c);
 fclose(f);
 getch();

 }

