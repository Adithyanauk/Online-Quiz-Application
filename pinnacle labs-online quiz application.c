#include<stdio.h>
#include<unistd.h>

int main()
{

	system("color 02");
	int ans,score=0,wrong=0,correct=0;
	printf("*******************************************quiz test********************************************************************\n");
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q1)What is the name of our neighbouring galaxy?\n");
	printf("1)Milky way galaxy\t\t2)Andromeda galaxy\n");
	printf("3)Cygnus A         \t\t4)Bode's galaxy");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q2)who is the founder of Space X?\n");
	printf("1)Ratan tata\t\t2)Andrew tate\n");
	printf("3)Elon musk  \t\t4)steve jobs");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
		printf("________________________________________________________________________________________________________________________\n");
	printf("Q3)Who painted Mona lisa?\n");
	printf("1)Leonardo da vinci\t\t2)dr raanga\n");
	printf("3)Leonardo di caprio\t\t4)Pablo picasso");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}	
	
		printf("________________________________________________________________________________________________________________________\n");
	printf("Q4)Distance between earth and sun is?\n");
	printf("1)180 billion km\t\t2)210 million km\n");
	printf("3)152 million km\t\t4)70 million km");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
		printf("________________________________________________________________________________________________________________________\n");
	printf("Q5)Deepest place on earth?\n");
	printf("1)Brownson deep   \t\t2)factorian deep\n");
	printf("3)diamantian tench \t\t4)Challenger deep");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==4)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
			printf("________________________________________________________________________________________________________________________\n");
	printf("Q6)Fastest man on earth?\n");
	printf("1)Usain bolt\t\t2)Layra frits\n");
	printf("3)Cameraman \t\t4)Tibo");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q7)Who is the main protagnist in attack on titans?\n");
	printf("1)Yamir fritz\t\t2)Eren yeger\n");
	printf("3)levi       \t\t4)mikasa");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q8)Who invented C-progamming?\n");
	printf("1)goldstein     \t\t2)de broglie\n");
	printf("3)Dennis Ritchie \t\t4)robert dowany jr");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==3)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q9)What is the size of pollution particles?\n");
	printf("1)2.5pm\t\t2)4.34pm\n");
	printf("3)10pm \t\t4)7.23pm");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==1)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	
	printf("________________________________________________________________________________________________________________________\n");
	printf("Q10)First man to go on space?\n");
	printf("1)john glenn    \t\t2)sally ride\n");
	printf("3)Neil armstrong\t\t4)Yuri gagarin");
	printf("\nSelect option:");
	scanf("%d",&ans);
	if(ans==2)
	{
		printf("correct answer\n");
		score+=5;
		correct++;
	}
	else
	{
		printf("wrong answer\n");
		wrong++;
	}
	printf("\n\n\n");
	printf("Total score=%d\n",score);
	printf("No of ans correct:%d\n",correct);
	printf("No of ans wrong:%d\n",wrong);
 return 0;	
}
