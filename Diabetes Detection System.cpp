#include<iostream>
#include<string>
#include<graphics.h>
#include<windows.h>
#include<conio.h>

using namespace std;

class Diabetes
{
	public:
		string name;
		int age;
		char gender;
		double weight;
		double height;
		double BMI;
		double count=0;
		
	public:
		void gotoxy(int x,int y)
		{
			COORD V={x, y};
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), V);
		}
		void getdata()
		{
			system("color F0");
			gotoxy(45,0);
			cout<<"***** Enter Data *****"<<endl;
			cout<<endl;
			cout<<"Enter Your Name                   : ";
			getline(cin, name);
			cout<<endl;
			cout<<"Enter Your Age                    : ";
			cin>>age;
			cout<<endl;
			cout<<"Enter Your Gender( M/F )          : ";
			cin>>gender;
			cout<<endl;
			cout<<"Enter Your Weight( In Kilograms ) : ";
			cin>>weight;
			cout<<endl;
			cout<<"Enter Your Height( In Meter )     : ";
			cin>>height;
			cout<<endl;
			BMI=weight/(height*height);
		}
		void welcome_screen()
		{
			initwindow(1366,768,"Welcome");
	
			setbkcolor(WHITE);
			cleardevice();
	
			readimagefile("C.jpg",0,0,1366,768);
			delay(2500);
			
			
	
	
				
			closegraph();
		}
		
		void display()
		{
			system("CLS");
			gotoxy(43,0);
			cout<<"***** Your Details *****"<<endl;
			cout<<endl;
			cout<<endl;
			gotoxy(40,4);
			cout<<" Name            : "<<name<<endl;
			gotoxy(40,6);
			cout<<" Age             : "<<age<<"yrs"<<endl;
			if(gender == 'M') 
			{
			gotoxy(40,8);
			cout<<" Gender          : "<<"Male"<<endl;
			}
			if(gender == 'F') 
			{
			gotoxy(40,8);
			cout<<" Gender          : "<<"Female"<<endl;
			}
			gotoxy(40,10);
			cout<<" Weight          : "<<weight<<"kg"<<endl;
			gotoxy(40,12);
			cout<<" Height          : "<<height<<"m"<<endl;
			gotoxy(40,14);
			cout<<" Body Mass Index : "<<BMI<<endl;
			
			if(BMI<18.5)
			{
			gotoxy(40,16);
			cout<<" BMI Status      : "<<"You are Underweight"<<endl;
		    }
			if(BMI>=18.5&&BMI<=24.9)
			{
			gotoxy(40,16);
			cout<<" BMI Status      : "<<"You are Healthy"<<endl;
			}
			if(BMI>=25&&BMI<=29.9)
			{
			gotoxy(40,16);
			cout<<" BMI Status      : "<<"You are Overweight"<<endl;
			}
			if(BMI>=30)
			{
			gotoxy(40,16);
			cout<<" BMI Status      : "<<"You are Obese"<<endl;
			}
			
			
			_getch();
			closegraph();
		}


//class Menu:public Diabetes
//{
//	public:
	//	double count=0;
		
		
		
		void menu()
		{
			initwindow(1366,768,"Menu");
			setbkcolor(RED);
			cleardevice();
			readimagefile("H.jpg",0,0,1366,768);
			
		/*	setfillstyle(SOLID_FILL,RED);
			rectangle(500,100,700,140);
			outtextxy(560,113,"C H E C K U P");
			floodfill(501,101,WHITE);  */
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,160,700,200);
			outtextxy(560,173,"C H E C K U P");
			floodfill(501,199,WHITE);	
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,220,700,260);
			outtextxy(560,233,"D O C T O R S");
			floodfill(501,259,WHITE);
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,280,700,320);
    		outtextxy(530,293,"        M E D I C I N E");
			floodfill(501,319,WHITE);
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,340,700,380);
			outtextxy(530,353,"        D I E T");
			floodfill(501,379,WHITE);
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,400,700,440);
			outtextxy(560,413,"W O R K O U T");
			floodfill(501,439,WHITE);
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,460,700,500);
			outtextxy(560,473,"A B O U T  U S");
			floodfill(501,499,WHITE);
	
			setfillstyle(SOLID_FILL,RED);
			rectangle(500,520,700,560);
			outtextxy(560,533,"      EXIT");
			floodfill(501,559,WHITE);
			
			
			settextstyle(BOLD_FONT,HORIZ_DIR,6);
        	setcolor(YELLOW);
	        outtextxy(536,80,"MENU");
	        
	        
	        
	       	POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<700 && mouse.x>500)&&(mouse.y<200 && mouse.y>160))
		    		{
			  			checkup();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<260 && mouse.y>220))
		    		{
			  			Doctors();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<320 && mouse.y>280))
		    		{
			  			medicine();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<380 && mouse.y>340))
		    		{
			  			Diet();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			Workout();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<500 && mouse.y>460))
		    		{
			  			About_us();
		   			}
		   			if((mouse.x<700 && mouse.x>500)&&(mouse.y<560 && mouse.y>520))
		    		{
			  			closegraph();
		   			}
		   			
		
				}
			}
				
	        
		
			_getch();
			closegraph();
			
		}
		void checkup()
		{
			initwindow(1366,768,"Checkup");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"let's work through a series of simple questions designed to deduce whether you are showing the common");
			outtextxy(30,275,"symptoms of Diabetes.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"Take the Test");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			symptom_1();
		   			}
		   		}
		   	}
			
			
			
			
			_getch();
			closegraph();
		}
		void symptom_1()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"Have you felt thirstier, or found yourself drinking more than usual in recent weeks or months?");
		//	outtextxy(30,275,"symptoms of Diabetes.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{
		    			count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Whilst thirst can be a symptom of diabetes, this symptom can come on gradually. With type 2 diabetes, ");	  
						outtextxy(30,255,"you don�t lose the ability to process sugar overnight, meaning the onset of excess thirst may be so");
						outtextxy(30,275,"gradual that you don�t notice it.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_2();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Whilst thirst can be a symptom of diabetes, this symptom can come on gradually. With type 2 diabetes, ");	  
						outtextxy(30,255,"you don�t lose the ability to process sugar overnight, meaning the onset of excess thirst may be so");
						outtextxy(30,275,"gradual that you don�t notice it.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_2();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
		
		
		
		_getch();
		closegraph();
		
		} 
		
		void symptom_2()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                 Are you peeing more than usual ?");
			outtextxy(30,275,"                                                  (more often than anyone else)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Alongside excess thirst, going to the toilet more often can be a symptom of diabetes.This is partly due to");	  
						outtextxy(30,255,"the fact you may be drinking more and partly because your body may be secreting excess sugar in the");
						outtextxy(30,275,"urine. Make sure you mention this symptom when you next speak to your doctor.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_3();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"More frequent peeing is a symptom of diabetes, but not everyone ");	  
						outtextxy(30,255,"experiences the same symptoms. In addition, this symptom can come");
						outtextxy(30,275,"on gradually, meaning you might not notice the increase.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_3();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		} 
		
		void symptom_3()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                        Have you noticed that any cuts and grazes you might have seem to be");
			outtextxy(30,275,"                                     taking longer to heal than usual?");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Diabetes causes levels of blood glucose to rise, which can lead to poor circulation. This means if you cut");	  
						outtextxy(30,255,"yourself, it can be harder for the blood to reach the area affected in order to repair it.");
					//	outtextxy(30,275,"urine. Make sure you mention this symptom when you next speak to your doctor.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_4();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Glucose levels in the bloodstream caused by diabetes may cause poor ");	  
						outtextxy(30,255,"circulation, and slow down healing. However, those who have just");
						outtextxy(30,275,"developed diabetes may not yet have experienced this symptom.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_4();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		}
		
		void symptom_4()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                              Have you noticed any changes to your vision?");
			outtextxy(30,275,"                                       (trouble with focus, seeing 'floaters', Blurry vision)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Early symptoms include trouble with focus, seeing 'floaters' in the field of vision or having blurred vision.");	  
						outtextxy(30,255,"If you get a sudden increase in 'floaters', you should seek urgent medical help as there are other possible");
						outtextxy(30,275,"causes that could threaten your eyesight if untreated.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_5();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Diabetes can cause problems with vision; however, early stage diabetic retinopathy");	  
						outtextxy(30,255,"may be asymptomatic. If you are experiencing other symptoms of diabetes,");
						outtextxy(30,275,"it�s important to speak to your GP.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_5();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		}
		
		void symptom_5()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                               Have you experienced recent tingling or a pins and needles sensation");
			outtextxy(30,275,"                                                   in the hands or feet?");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"As well as affecting the vessels in the eyes, high levels of glucose in the bloodstream can lead");	  
						outtextxy(30,255,"to an inflammatory response. As this frequently occurs in the smaller vessels,");
						outtextxy(30,275,"it can cause diabetic neuropathy � tingling in the hands and feet. ");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_6();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Diabetes can lead to tingling in the hands and feet caused by inflammation of blood vessels.");	  
						outtextxy(30,255,"Not having this symptom is a good sign ");
						outtextxy(30,275,"� but not conclusive on its own.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_6();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		}
		
		void symptom_6()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
		
		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                       Have you been experiencing excessive tiredness or fatigue?");
			outtextxy(30,275,"                                                    (more tiredness than usual)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Slow circulation in diabetes can mean that your body isn�t delivering sufficient oxygen to your cells, ");	  
						outtextxy(30,255,"making you feel more tired. However, feeling tired can be a symptom of many conditions, including");
						outtextxy(30,275,"having an underactive thyroid, depression and poor sleep.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_7();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"People with diabetes often feel tired due to problems with circulation. ");	  
						outtextxy(30,255,"This is a common symptom of diabetes, so if you aren�t experiencing this problem,");
						outtextxy(30,275,"that�s good news! (if you do not have other signs too)");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							symptom_7();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		}
		
		void symptom_7()
		{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);

		
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                    Do you experience dizziness?");
			outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED); 
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	count++;
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"Anyone with type 2 diabetes can experience frequent or severe dizziness.");	  
						outtextxy(30,255,"Dizziness could be a sign of uncontrolled blood sugar or dehydration,");
						outtextxy(30,275,"both of which can cause severe complications without treatment.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
						{
							GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							Analyze_symptom();
		   							}
		   						}
		   				}
		   				
		   				_getch();
						closegraph();
						
						
		   			}
		   			if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{
			  			initwindow(1366,768,"Symptom");
						setbkcolor(RED);
						cleardevice();
						readimagefile("B.jpg",0,0,1366,768);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"People with diabetes often feel dizziness due to problems with circulation.");	  
						outtextxy(30,255,"This is a common symptom of diabetes, so if you aren�t experiencing this problem,");
						outtextxy(30,275,"that�s good news! (if you do not have other signs too)");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
						
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"Continue");
						floodfill(301,439,WHITE);
			
			
						POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							Analyze_symptom();
		   							}
		   						}
		   					}
						
						_getch();
						closegraph();
						
		   			}
		   		}
		   	}  
		
			
			
			_getch();
			closegraph();	
					
		}
		
		void Analyze_symptom()
		{
			initwindow(1366,768,"Analyzing Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");	  
			outtextxy(30,255,"                                          Let's Analyze the symptoms that you are showing !!!!");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			delay(3000);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Show Result");
			floodfill(301,389,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							Result();
		   							}
		   						}
		   					}
			
			
			
			
			
			_getch();
			closegraph();	
		}
		
	void Result()
	{
			initwindow(1366,768,"Result");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			if(count==7)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                              Your risk of diabetes is extremely high!!");  
			outtextxy(30,255,"                                       (you are displaying many of the symptoms of diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==6)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                              Your risk of diabetes is extremely high!!");  
			outtextxy(30,255,"                                       (you are displaying many of the symptoms of diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type();
		   							}
		   						}
		   					}
			
			
			}
			
			
			if(count==5)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                                 Your risk of diabetes is high!!");  
			outtextxy(30,255,"                                       (you are displaying many of the symptoms of diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                                 Your risk of diabetes is high!!");  
			outtextxy(30,255,"                                       (you are displaying many of the symptoms of diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==3)
			{
			setbkcolor(BLUE);	
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                               Your risk of diabetes is moderate!!");  
			outtextxy(30,255,"                                       (you are displaying some of the symptoms of diabetes)");
			outtextxy(30,275,"                            if you want to go futher press continue to work through few more symptoms");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Exit");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							menu();
		   							}
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==2)
			{
			setbkcolor(GREEN);	
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                                  Your risk of diabetes is low!!");  
			outtextxy(30,255,"                                       (you are displaying few of the symptoms of diabetes)");
			outtextxy(30,275,"                      However, it's important to speak to a Doctor about the symptoms that you have.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==1)
			{
			setbkcolor(GREEN);	
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                                  Your risk of diabetes is low!!");  
			outtextxy(30,255,"                                       (you are displaying few of the symptoms of diabetes)");
			outtextxy(30,275,"                      However, it's important to speak to a Doctor about the symptoms that you have.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			
			
			}
			
			if(count==0)
			{
			setbkcolor(GREEN);	
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                              Your risk of diabetes is extremely low!!");  
			outtextxy(30,255,"                                       (you are displaying none of the symptoms of diabetes)");
		//	outtextxy(30,275,"                      However, it's important to speak to a Doctor about the symptoms you have.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,GREEN);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			
			
			}
			
			
			
			_getch();
			closegraph();	
	}	
	
	void type()
	{
		
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                   Have you experienced sudden or unintentional weight gain?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type1();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type1();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	void type1()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                       Do you have poor quality sleep that doesn't improve no matter what you do?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type2();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type2();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	
	void type2()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                 Have you experienced yeast infection that keep coming back?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type3();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type3();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	
	void type3()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                   Do you have dry mouth most of the time?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type4();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type4();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	
	void type4()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                Have you experienced nausea and vomiting?");
			outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type5();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type5();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	void type5()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                Have you experienced extreme headaches?");
			outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type6();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type6();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	void type6()
	{		
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                Do you have red, swollen, tender gums?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			pregnent();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			pregnent();
		    		}
		    		
		    	}
		    }
			
			_getch();
			closegraph();	
	}

	
	void pregnent()
	{	      
		if(gender =='F')
		{
			if(age>=20&&age<=45)
			{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                         Are you pregnent?");
		//	outtextxy(30,275,"(they tend to form on hands, feet, legs or forearm and are similar to burn blisters but they are not painful)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
							
			POINT mouse;
			while(1)
				{
				GetCursorPos(&mouse);
					if(GetAsyncKeyState(VK_LBUTTON))
					{
						if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
						{
						initwindow(1366,768,"Result");
						setbkcolor(RED);
						cleardevice();
						readimagefile("I.jpg",0,0,1366,768);
													
						setfillstyle(SOLID_FILL,RED);
						rectangle(25,210,718,330);
						outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						outtextxy(30,235,"                         You are most likely to have gestational diabetes!!!No quiz can tell you");  
						outtextxy(30,255,"    whether you have a specific condition. However you are displaying many of the symptoms");
						outtextxy(30,275,"     of Gestational diabetes.It�s important that you speak to your Doctor as soon as possible.");
						outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
						floodfill(26,329,WHITE);
			
						setfillstyle(SOLID_FILL,RED);
						rectangle(300,400,450,440);
						outtextxy(331,413,"   Exit");
						floodfill(301,439,WHITE);
			
						POINT mouse;
						while(1)
						{
						GetCursorPos(&mouse);
							if(GetAsyncKeyState(VK_LBUTTON))
								{
								if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
		   				}
		   				if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		   					{
		   						Analyze_symptom1();
							}
					}
												
				}
		}
		else
		{
			Analyze_symptom1();
		}
	}
 else
		{
			Analyze_symptom1();
		}
	}
		
	
	void type7()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                           Do you have confusion and anxiety that makes you irritated easily?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type8();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type8();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	
	void type8()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                   Have you experienced sudden or unintentional weight loss?");
		//	outtextxy(30,275,"                                                     (frequently, time to time)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type9();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type9();
		    		}
		    		
		    	}
		    }
			
			
			
			_getch();
			closegraph();	
	}
	
	void type9()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                      Do you have fruity breath?");
			outtextxy(30,275,"                                 (Like acetone or the same fruity scent as nail polish remover)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
		    			count=count+1;
		    			type10();
		    		}
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			type10();
		    		}
		    		
		    	}
		    }
		
				
			_getch();
			closegraph();	
	}
	
	void type10()
	{
			initwindow(1366,768,"Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("B.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");  
			outtextxy(30,255,"                                                  Do you have sudden blisters on your skin?");
			outtextxy(30,275,"(they tend to form on hands, feet, legs or forearm and are similar to burn blisters but they are not painful)");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"YES");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"NO");
			floodfill(301,439,WHITE);
			
			POINT mouse;
			while(1)
			{
				GetCursorPos(&mouse);
				if(GetAsyncKeyState(VK_LBUTTON))
				{
					if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    		{	
							count=count+1;
							Analyze_symptom2();
					}
						
		    		if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    		{	
		    			Analyze_symptom2();
		    		}
		    		
		    	}
		    }
		
				
			_getch();
			closegraph();	
	}
	

	
		void Analyze_symptom1()
		{
			initwindow(1366,768,"Analyzing Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");	  
			outtextxy(30,255,"                                          Let's Analyze the symptoms that you are showing !!!!");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			delay(3000);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Show Result");
			floodfill(301,389,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							Result1();
		   							}
		   						}
		   					}
			
			
			_getch();
			closegraph();	
		}
		
		void Result1()
		{
			initwindow(1366,768,"Result");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
					
			if(count==0)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                 Your chances of having type 2 diabetes seems to be low!!!");  
			outtextxy(30,255,"                             (you are displaying none of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{	
										count=0;
			  							type7();
		   							}
		   						}
		   					}
			
			}
			
			if(count<3)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                 Your chances of having type 2 diabetes seems to be low!!!");  
			outtextxy(30,255,"                             (you are displaying very few of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"                  Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			
			}
			
			if(count==3)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                 Your chances of having type 2 diabetes seems to be moderate!!!");  
			outtextxy(30,255,"                   (you are displaying few of the above symptoms of type 2 diabetes)    You can");
			outtextxy(30,275,"work through few more symptoms to confirm the type of diabetes you might have or consult a doctor");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Exit");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							menu();
		   							}
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			
			}
			
		
			
		if(age>=25&&age<45)
		{
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"    Your chances of having type 2 diabetes seems to be moderate!!! No quiz can tell you");  
			outtextxy(30,255,"    whether you have a specific condition. However you are displaying few of the symptoms");
			outtextxy(30,275,"     of type 2 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
		}
			
		else if(age>=45)
		{
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                         You are most likely to have type 2 diabetes!!!No quiz can tell you");  
			outtextxy(30,255,"    whether you have a specific condition. However you are displaying many of the symptoms");
			outtextxy(30,275,"     of type 2 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
		}
		
		else if(age<=14)
		{
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                    You are very young!!! your chances of having type 1 diabetes is high!!!");  
			outtextxy(30,255,"                (however,you are displaying many of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"              Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			}
			
			if(count==5)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                    You are very young!!! your chances of having type 1 diabetes is high!!!");  
			outtextxy(30,255,"                (however,you are displaying many of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"              Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			}
			if(count==6)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                    You are very young!!! your chances of having type 1 diabetes is high!!!");  
			outtextxy(30,255,"                (however,you are displaying many of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"              Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			}
			if(count==7)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                    You are very young!!! your chances of having type 1 diabetes is high!!!");  
			outtextxy(30,255,"                (however,you are displaying many of the above symptoms of type 2 diabetes)");
			outtextxy(30,275,"              Lets's work through few more symptoms to confirm the type of diabetes you might have");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			}
		}
		
		else
		{
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                                 Your chances of having type 2 diabetes seems to be moderate!!!");  
			outtextxy(30,255,"               (you are displaying few of the above symptoms of type 2 diabetes)   You can");
			outtextxy(30,275,"work through few more symptoms to confirm the type of diabetes you might have or consult a doctor");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Exit");
			floodfill(301,389,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Continue");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							menu();
		   							}
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
		    							count=0;
			  							type7();
		   							}
		   						}
		   					}
			}
		}
		
		if(count>=5)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"                         You are most likely to have type 2 diabetes!!!No quiz can tell you");  
			outtextxy(30,255,"    whether you have a specific condition. However you are displaying many of the symptoms");
			outtextxy(30,275,"     of type 2 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
		
	
			
			_getch();
			closegraph();	
		}
		
		void Analyze_symptom2()
		{
			initwindow(1366,768,"Analyzing Symptom");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");	  
			outtextxy(30,255,"                                          Let's Analyze the symptoms that you are showing !!!!");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			delay(3000);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,350,450,390);
			outtextxy(331,363,"Show Result");
			floodfill(301,389,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<390 && mouse.y>350))
		    						{
			  							Result2();
		   							}
		   						}
		   					}
			
			
			_getch();
			closegraph();	
		}
		
		void Result2()
		{
			initwindow(1366,768,"Result");
			setbkcolor(RED);
			cleardevice();
			readimagefile("I.jpg",0,0,1366,768);
			
			if(count==0)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"      Your chances of having type 1 diabetes seems to be low!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying none of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			
			if(count==1)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"      Your chances of having type 1 diabetes seems to be low!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying few of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			
			if(age<=14)
			{
			if(count==2)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"    Your chances of having type 1 diabetes seems to be moderate!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying few of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			}
			
			else if(count==2)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"      Your chances of having type 1 diabetes seems to be low!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying few of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			
		
			
			if(count==3)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"     Your chances of having type 1 diabetes seems to be high!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying many of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			
			if(count==4)
			{
			setfillstyle(SOLID_FILL,RED);
			rectangle(25,210,718,330);
			outtextxy(30,220,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			outtextxy(30,235,"     Your chances of having type 1 diabetes seems to be high!!!No quiz can tell you");  
			outtextxy(30,255,"whether you have a specific condition. However you are displaying many of the above symptoms");
			outtextxy(30,275,"     of type 1 diabetes.It�s important that you speak to your Doctor as soon as possible.");
			outtextxy(30,300,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ");
			floodfill(26,329,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
			rectangle(300,400,450,440);
			outtextxy(331,413,"   Exit");
			floodfill(301,439,WHITE);
			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<450 && mouse.x>300)&&(mouse.y<440 && mouse.y>400))
		    						{
			  							menu();
		   							}
		   						}
		   					}
			}
			
			_getch();
			closegraph();	
		}
		
		void Doctors()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(RED);
			cleardevice();
			readimagefile("doctor.jpg",0,0,1366,768);
	
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(350,50,975,170);
			outtextxy(360,60,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"); 
			outtextxy(360,105,"                        Let's have a look at some of the best doctors for diabetes in Nepal.");
			outtextxy(360,150,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");			floodfill(351,169,WHITE);
	 
	    	setfillstyle(SOLID_FILL,BLUE);
   		    rectangle(595,550,765,580);
   			outtextxy(651,558,"Continue");
   			floodfill(596,579,WHITE);
   			
   				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<765 && mouse.x>595)&&(mouse.y<580 && mouse.y>550))
		    						{
			  							Dr_Jyoti();
		   							}
		   						}
		   					}
   			
   			getch();
   			closegraph();	
		}
		
		void Dr_Jyoti()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(BLUE);
			cleardevice();
			readimagefile("A.jpg",0,0,1366,768);
	
	
			readimagefile("Dr.Jyoti.jpg",900,100,1100,250);
			setfillstyle(SOLID_FILL,RED);
			settextstyle(BOLD_FONT,HORIZ_DIR,4);
			outtextxy(780,310,"Dr. Jyoti Bhattarai");
			
			settextstyle(0,HORIZ_DIR,0.5);
			outtextxy(780,335,"Endocrinology,Diabetes and Metabolism Specialist");
			
   			settextstyle(0,HORIZ_DIR,2);
	    	readimagefile("HI.jpg",780,360,800,375);
			outtextxy(810,360,"Mero Kathmandu Hospital");
			readimagefile("LI.jpg",780,392,800,407);
    		outtextxy(810,385,"Narayan Gopal Chowk,Maharajgunj,");
    		outtextxy(810,400,"Kathmandu,Nepal");
    		readimagefile("CI.jpg",780,425,800,440);
    		outtextxy(810,425,"+977-1-721515,+977-1-4721514");
    		readimagefile("MI.jpg",780,450,800,460);
   			outtextxy(819,450,"jyotikunwar@yahoo.com");
   			
   			
			setfillstyle(SOLID_FILL,BLUE);
   			rectangle(1150,600,1300,630);
   			settextstyle(BOLD_FONT,HORIZ_DIR,3);
   			outtextxy(1193,604,"Next");
   			floodfill(1151,629,WHITE);
   			
   				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							Dr_Aditya();
		   							}
		   						}
		   					}
		   					
		   	_getch();
   			closegraph();				
		}
		
		
		void Dr_Aditya()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(BLUE);
			cleardevice();
			readimagefile("A.jpg",0,0,1366,768);
	
	
			readimagefile("Dr.Aditya.jpg",900,100,1100,250);
			setfillstyle(SOLID_FILL,RED);
			settextstyle(BOLD_FONT,HORIZ_DIR,4);
			outtextxy(780,310,"Dr. Aditya Mahaseth");
			settextstyle(0,HORIZ_DIR,0.5);
			outtextxy(780,335,"Cardiologist and Physician");
    		outtextxy(780,350,"Life member of Diabetes and Endocrine");
    		outtextxy(780,365,"association of Nepal,Nepal Stroke Association");
    		settextstyle(0,HORIZ_DIR,2); 
    		readimagefile("HI.jpg",780,395,800,410);
			outtextxy(810,400,"Sahid Gangalal National Heart Center");
			readimagefile("LI.jpg",780,425,800,440);
    		outtextxy(810,425,"Janswastha Marga,Janakpur,Nepal");
    		readimagefile("CI.jpg",780,450,800,465);
    		outtextxy(810,450,"NMC Number: 11285");
    		outtextxy(810,475,"Email: adimyth@me.com");
    		readimagefile("MI.jpg",780,475,800,490);
   	
   			setfillstyle(SOLID_FILL,BLUE);
   			rectangle(1150,600,1300,630);
   			settextstyle(BOLD_FONT,HORIZ_DIR,3);
   			outtextxy(1193,604,"Next");
   			floodfill(1151,629,WHITE);
	
			POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							Dr_Sukanti();
		   							}
		   						}
		   					}
	
		_getch();
    	closegraph();

		}
		
		void Dr_Sukanti()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(BLUE);
			cleardevice();
			readimagefile("A.jpg",0,0,1366,768);
	
	
			readimagefile("Dr.Sukanti.jpg",900,100,1100,250);
			setfillstyle(SOLID_FILL,RED);
			settextstyle(BOLD_FONT,HORIZ_DIR,4);
			outtextxy(740,310,"Dr. Sukanti Shah");
			settextstyle(0,HORIZ_DIR,0.5);
			outtextxy(740,335,"Endocrinology,Diabetes and Metabolism Specialist");
    		settextstyle(0,HORIZ_DIR,2);
   			readimagefile("HI.jpg",740,360,755,370);
			outtextxy(760,360,"Grande International Hospital");
			readimagefile("LI.jpg",740,375,755,385);
    		outtextxy(760,375,"Dhapasi, Kathmandu, Nepal");
    
			readimagefile("HI.jpg",740,400,755,410);
    		outtextxy(760,400,"B.P. Smriti Hospital");
    		readimagefile("LI.jpg",740,415,755,425);
    		outtextxy(760,415,"Shreekanti Marga, Basundhara, Kathmandu");
    
    		readimagefile("HI.jpg",740,450,755,460);
    		outtextxy(760,440,"Diabetes,Thyroid & Endocrinology");
    		outtextxy(760,455,"Care Center");
    		readimagefile("LI.jpg",740,470,755,480);
    		outtextxy(760,470,"Kupondol,Hanumansthan,Lalitpur-10");
    
    		readimagefile("HI.jpg",740,505,755,515);
    		outtextxy(760,495,"City Speciality(Rheumatology and ");
    		outtextxy(760,510,"Endocrinology)Health Clinic");
    		readimagefile("LI.jpg",740,525,755,535);
    		outtextxy(760,525,"Anamnagar, Kathmandu, Nepal");
    
    
    		readimagefile("CI.jpg",740,550,755,560);
    		outtextxy(760,550,"NMC Number: 12221");
    
			setfillstyle(SOLID_FILL,BLUE);
   			rectangle(1150,600,1300,630);
   			settextstyle(BOLD_FONT,HORIZ_DIR,3);
   			outtextxy(1193,604,"Next");
   			floodfill(1151,629,WHITE);
	
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							Dr_Binaya();
		   							}
		   						}
		   					}
	
		_getch();
    	closegraph();

		}
		
		void Dr_Binaya()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(BLUE);
			cleardevice();
			readimagefile("A.jpg",0,0,1366,768);
	
	
			readimagefile("Dr.Binaya.jpg",900,100,1100,250);
			setfillstyle(SOLID_FILL,RED);
			settextstyle(BOLD_FONT,HORIZ_DIR,4);
			outtextxy(780,310,"Dr. Binaya Bhattarai");
			settextstyle(0,HORIZ_DIR,0.5);
			outtextxy(780,335,"Endocrinology(diabetes,thyroid,hormone specialist)");
    		settextstyle(0,HORIZ_DIR,2);
    		readimagefile("HI.jpg",780,360,800,370);
			outtextxy(810,360,"Hams Hospital");
			readimagefile("LI.jpg",780,375,800,385);
    		outtextxy(810,375,"Dhumbarahi, Kathmandu");
    		readimagefile("HI.jpg",780,400,800,410);
    		outtextxy(810,400,"Metro Kathmandu Hospital");
    		outtextxy(810,415,"Maharajgung,Narayan Gopal Chowk");
   			readimagefile("LI.jpg",780,415,800,425);
    		readimagefile("CI.jpg",780,440,800,450);
    		outtextxy(810,440,"NMC Number: 9095");
    
			setfillstyle(SOLID_FILL,BLUE);
   			rectangle(1150,600,1300,630);
   			settextstyle(BOLD_FONT,HORIZ_DIR,3);
   			outtextxy(1193,604,"Next");
   			floodfill(1151,629,WHITE);
   			
   			POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							Dr_Ansumali();
		   							}
		   						}
		   					}
	
			_getch();
    		closegraph();
		}
		
		void Dr_Ansumali()
		{
			initwindow(1366,768,"Doctors");
			setbkcolor(BLUE);
			cleardevice();
			readimagefile("A.jpg",0,0,1366,768);
	
	
			readimagefile("Dr.Ansumali.jpg",900,100,1100,250);
			setfillstyle(SOLID_FILL,RED);
			settextstyle(BOLD_FONT,HORIZ_DIR,4);
			outtextxy(780,310,"Dr. Ansu Mali Joshi");
			settextstyle(0,HORIZ_DIR,0.5);
			outtextxy(780,335,"Internal medicine,endocrinologist");
    		settextstyle(0,HORIZ_DIR,2); 
    		readimagefile("HI.jpg",780,370,800,380);
			outtextxy(810,360,"Kathmandu Diabetes & Thyroid");
			outtextxy(810,375,"Center PVT. LTD.");
			readimagefile("LI.jpg",780,390,800,400);
    		outtextxy(810,390,"Jawalakhel, Lalitpur, Nepal");
    
			readimagefile("HI.jpg",780,415,800,425);
    		outtextxy(810,415,"Grande International Hospital");
    		readimagefile("LI.jpg",780,430,800,440);
    		outtextxy(810,430,"Dhapasi, kathmandu, Nepal");
			readimagefile("CI.jpg",780,455,800,465);
    		outtextxy(810,455,"9818951781, 9813643774");
   
  			setfillstyle(SOLID_FILL,BLUE);
   			rectangle(1150,600,1300,630);
   			settextstyle(BOLD_FONT,HORIZ_DIR,3);
   			outtextxy(1193,604,"Exit");
   			floodfill(1151,629,WHITE);
   			
   			POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							menu();
		   							}
		   						}
		   					}
	
			_getch();
    		closegraph();

		}
	void medicine()
		{
			initwindow(1366,768,"medicines");
			setbkcolor(RED);
			cleardevice();
			readimagefile("G.jpg",0,0,1366,768);

			setfillstyle(SOLID_FILL,BLUE);
			rectangle(710,250,1335,370);
			outtextxy(720,260,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"); 
			outtextxy(785,300,"Let's have a look at some of the medicines that diabetic patient should take.");
			outtextxy(720,340,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			floodfill(761,369,WHITE);
	
		    setfillstyle(SOLID_FILL,BLUE);
   	        rectangle(950,390,1080,430);
   			outtextxy(990,400,"Continue");
   			floodfill(951,429,WHITE);

	      	POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1080 && mouse.x>950)&&(mouse.y<430 && mouse.y>390))
		    						{
			  							type_1();
		   							}
		   						}
		   					}
	      	
	      	_getch();
			closegraph();
	}

	void type_1()
{
	initwindow(1366,768,"type1");
	setbkcolor(BLUE);
	cleardevice();
	readimagefile("F.jpg",0,0,1366,768);
	
	
	    settextstyle(BOLD_FONT,HORIZ_DIR,5);
		outtextxy(547,50,"***Type 1 Diabetes***");
	    settextstyle(BOLD_FONT,HORIZ_DIR,1);
		outtextxy(350,150,"Insulin is the main treatment for type 1 diabetes. It replaces the hormone your body ");
	    outtextxy(350,165,"isn't able to produce.");
	    outtextxy(350,190,"There are four types of insulin that are most commonly used. They�re differentiated by");
        outtextxy(350,205,"how quickly they start to work, and how long their effects last:");
        outtextxy(350,230,"*Rapid-Acting Insulin: It starts to work within 15 minutes and its effects last for 3 ");
        outtextxy(360,245,"to 4 hours.");	
        outtextxy(350,270,"*Short-acting insulin: It starts to work within 30 minutes and lasts 6 to 8 hours.");
        outtextxy(350,295,"*Intermediate-acting insulin: It starts to work within 1 to 2 hours and lasts 12 to 18");
        outtextxy(360,310,"hours.");
        outtextxy(350,335,"*Long-acting insulin: It starts to work a few hours after injection and lasts 24 hours");
        outtextxy(360,350,"or longer.");
        
        
 	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
   	
   	POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							type_2();
		   							}
		   						}
		   					}
   	
	
	getch();
	closegraph();
}
void type_2()
{
	initwindow(1366,768,"type2");
	setbkcolor(BLUE);
	cleardevice();
	readimagefile("F.jpg",0,0,1366,768);
	
	
	    settextstyle(BOLD_FONT,HORIZ_DIR,5);
		outtextxy(545,50,"***Type 2 Diabetes***");
	    settextstyle(BOLD_FONT,HORIZ_DIR,1);
		outtextxy(350,150,"Exercise and diet help some people manage type 2 diabetes. If lifestyle changes aren�t");
	    outtextxy(350,165,"enough to lower your blood sugar, you�ll need to take medication.");
	    outtextxy(350,190,"These types of drugs lower your blood sugar in a variety of ways:");
        outtextxy(350,215,"*Alpha-glucosidase inhibitors:It Slows your body�s breakdown of sugars and starchy foods.");
        outtextxy(360,230,"For eg: Acarbose (Precose) and miglitol (Glyset).");	
        outtextxy(350,255,"*Biguanides: It reduces the amount of glucose your liver makes.For eg: ");
        outtextxy(360,270,"Metformin (Glucophage).");
        outtextxy(350,295,"*DPP-4 inhibitors: It improves your blood sugar without making it drop too low.");
        outtextxy(360,310,"For eg: Linagliptin (Tradjenta), saxagliptin(Onglyza),and sitagliptin(Januvia).");
	    outtextxy(350,335,"*Glucagon-like peptides: It changes the way your body produces insulin. For eg:");
        outtextxy(360,350,"Dulaglutide (Trulicity), exenatide (Byetta), and liraglutide (Victoza).");
        outtextxy(350,375,"*Meglitinides: It stimulates your pancreas to release more insulin. For eg: ");
        outtextxy(360,390,"Nateglinide (Starlix) and repaglinide (Prandin).");
        
        
	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							type_3();
		   							}
		   						}
		   					}
   	
	getch();
	closegraph();
}
void type_3()
{
	initwindow(1366,768,"gestational");
	setbkcolor(BLUE);
	cleardevice();
	readimagefile("F.jpg",0,0,1366,768);
	
	
	    settextstyle(BOLD_FONT,HORIZ_DIR,5);
		outtextxy(445,80,"***Gestational Diabetes***");
	    settextstyle(BOLD_FONT,HORIZ_DIR,1);
		outtextxy(350,200,"You�ll need to monitor your blood sugar level several times a day during ");
	    outtextxy(350,225,"pregnancy. If it�s high,dietary changes and exercise may or may not be enough");
	    outtextxy(350,250,"to bring it down.");
	    outtextxy(350,300,"According to the Mayo Clinic, about 10 to 20 percent of women with gestational ");
        outtextxy(350,325,"diabetes will need insulin to lower their blood sugar. Insulin is safe for the ");
        outtextxy(350,350,"growing baby.");
		
			
 	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Exit");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							menu();
		   							}
		   						}
		   					}
   	
    getch();
	closegraph();
}

	void Diet()
{
			initwindow(1366,768,"foods");
			setbkcolor(RED);
			cleardevice();
			readimagefile("M.jpg",0,0,1366,768);
	
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(750,250,1350,370);
			outtextxy(760,260,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"); 
			outtextxy(840,300,"Let's have a look at some of the foods that are good for diabetes.");
			outtextxy(760,340,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			floodfill(761,369,WHITE);
	
	 
	       	setfillstyle(SOLID_FILL,BLUE);
   	        rectangle(980,390,1150,430);
   			outtextxy(1040,400,"Continue");
   			floodfill(981,429,WHITE);
	      	
	      	POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1150 && mouse.x>980)&&(mouse.y<430 && mouse.y>390))
		    						{
			  							vegetables();
		   							}
		   						}
		   					}
	     	
			_getch();
			closegraph();
	}
	
	void vegetables()
{
	initwindow(1366,768,"Vegetables");
	readimagefile("Vegetables.jpg",50,50,600,700);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(780,220,"1. Ladies Finger.");
	outtextxy(780,250,"2. Broccoli.");    	
    outtextxy(780,280,"3. Green Leafy Vegetables.");
    outtextxy(780,310,"4. Carrots.");
    outtextxy(780,340,"5. Tomatoes.");
    outtextxy(780,370,"6. Potatoes.");
    outtextxy(780,400,"7. Green Peas.");
	
	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							fruits();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
		
}
   
void fruits()
{
 	initwindow(1366,768,"Fruits");
	readimagefile("Fruits.jpg",50,50,600,700);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(780,220,"1. Orange.");
	outtextxy(780,250,"2. Watermelon.");    	
    outtextxy(780,280,"3. Berries.");
    outtextxy(780,310,"4. Apples.");
    outtextxy(780,340,"5. Bananas.");
    outtextxy(780,370,"6. Grapes.");
    outtextxy(780,400,"7. Pears.");	

    setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							grains();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
}

void grains()
{
  initwindow(1366,768,"Grains");
	readimagefile("Grains.jpg",50,50,600,700);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(780,220,"1. Wheat.");
	outtextxy(780,250,"2. Rice.");    	
    outtextxy(780,280,"3. Oats.");
    outtextxy(780,310,"4. Cornmeal.");
    outtextxy(780,340,"5. Barley.");
    outtextxy(780,370,"6. Quinoa.");
    outtextxy(780,400,"7. Bread.");	
	outtextxy(780,430,"8. Cereal.");
	outtextxy(780,460,"9. Pasta.");	

    setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
	
		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							protein();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
	
}

void protein()
{
	initwindow(1366,768,"Protein");
	readimagefile("Meat.jpg",50,50,600,700);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(780,220,"1. Lean Meat.");
	outtextxy(780,250,"2. Chicken or Turkey without skin.");    	
    outtextxy(780,280,"3. Fish.");
    outtextxy(780,310,"4. Eggs.");
    outtextxy(780,340,"5. Nuts and Peanuts.");
    outtextxy(780,370,"6. Dried Beans.");
    outtextxy(780,400,"7. Tofu.");	
	outtextxy(780,430,"8. Pork.");
		
	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Next");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							dairy();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
}

void dairy()
{
	initwindow(1366,768,"Dairy");
	readimagefile("Dairy.jpg",50,50,600,700);
	settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(780,220,"1. Fat Free Milk.");
	outtextxy(780,250,"2. Yogurt.");    	
    outtextxy(780,280,"3. Cheese.");
    outtextxy(780,310,"4. Sweetened Dairy Products.");
    outtextxy(780,340,"5. Grass-Fed Dairy.");

	setfillstyle(SOLID_FILL,BLUE);
   	rectangle(1150,600,1300,630);
   	settextstyle(BOLD_FONT,HORIZ_DIR,3);
   	outtextxy(1193,604,"Exit");
   	floodfill(1151,629,WHITE);
   	
   		POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							menu();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
}
	void Workout()
	{
			initwindow(1366,768,"Workout");
			setbkcolor(RED);
			cleardevice();
			readimagefile("Workout.jpg",0,0,1366,768);

			setfillstyle(SOLID_FILL,RED);
			rectangle(710,150,1335,270);
			outtextxy(720,160,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"); 
			outtextxy(800,200,"Let's have a look at some of the workouts that diabetes patient should do.");
			outtextxy(720,240,"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
			floodfill(711,269,WHITE);
			
			setfillstyle(SOLID_FILL,RED);
   	        rectangle(965,290,1095,330);
   			outtextxy(1000,300,"Continue");
   			floodfill(966,329,WHITE);
   			
				POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1095 && mouse.x>965)&&(mouse.y<330 && mouse.y>290))
		    						{
			  							yoga();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
	}
	
	void yoga()
{
		initwindow(1366,768,"Yoga");
		settextstyle(BOLD_FONT,HORIZ_DIR,6);
		outtextxy(470,10,"***YOGAS***");
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
        outtextxy(40,70,"1. Dhanurasana:");
        readimagefile("Dhanurasana.jpg",80,100,350,300);
        
        outtextxy(450,70,"2. Vrikshasana:");
        readimagefile("Vrikshasana.jpg",480,100,740,300);
        
        outtextxy(850,70,"3. Halasana:");
        readimagefile("Halasana.jpg",880,100,1130,300);
        
        outtextxy(40,400,"4. Ardha Matsyendrasana:");
        readimagefile("Ardha Matsyendrasana.jpg",80,450,350,650);
        
        outtextxy(450,400,"5. Suryanamaskar:");
        readimagefile("Suryanamaskar.jpg",480,450,740,650);
        
        setfillstyle(SOLID_FILL,RED);
   		rectangle(1150,600,1300,630);
   		settextstyle(BOLD_FONT,HORIZ_DIR,3);
   		outtextxy(1193,604,"Next");
   		floodfill(1151,629,WHITE);
   		
   			POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							exercise();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
   		
}

void exercise()
{
		initwindow(1366,768,"Exercise");
		settextstyle(BOLD_FONT,HORIZ_DIR,6);
		outtextxy(440,10,"***EXERCISES***");
		settextstyle(BOLD_FONT,HORIZ_DIR,3);
        outtextxy(40,70,"1. Walking:");
        readimagefile("walking.jpg",80,100,350,300);
        
        outtextxy(450,70,"2. Running:");
        readimagefile("running.jpg",480,100,740,300);
        
        outtextxy(850,70,"3. Swimming:");
        readimagefile("swimming.jpg",880,100,1130,300);
        
        outtextxy(40,400,"4. Weightlifting:");
        readimagefile("weightlifting.jpg",80,450,350,650);
        
        outtextxy(450,400,"5. Cycling:");
        readimagefile("cycling.jpg",480,450,740,650);

		setfillstyle(SOLID_FILL,RED);
   		rectangle(1150,600,1300,630);
   		settextstyle(BOLD_FONT,HORIZ_DIR,3);
   		outtextxy(1193,604,"Exit");
   		floodfill(1151,629,WHITE);
   		
   			POINT mouse;
						while(1)
							{
								GetCursorPos(&mouse);
								if(GetAsyncKeyState(VK_LBUTTON))
								{
									if((mouse.x<1300 && mouse.x>1150)&&(mouse.y<630 && mouse.y>600))
		    						{
			  							menu();
		   							}
		   						}
		   					}
   	_getch();
	closegraph();
   		
}

void About_us()
	{
			initwindow(1366,768,"Aboutus");
			readimagefile("Aashish.jpg",50,50,600,700);
			
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(780,220,"Name    : Aashish Pandey");
			outtextxy(780,250,"Roll no : 760302");    	
    	//	outtextxy(780,280,"3. Fish.");
    	//	outtextxy(780,310,"4. Eggs.");
    	//	outtextxy(780,340,"5. Nuts and Peanuts.");
    	//	outtextxy(780,370,"6. Dried Beans.");
    	//	outtextxy(780,400,"7. Tofu.");	
		//	outtextxy(780,430,"8. Pork.");
			delay(2500);
			
			initwindow(1366,768,"Aboutus");
			readimagefile("Oman.jpg",50,50,600,700);
			
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(780,220,"Name    : Oman Neupane");
			outtextxy(780,250,"Roll no : 760324"); 
			delay(2500);   
				
			initwindow(1366,768,"Aboutus");
			readimagefile("Shivansh.jpg",50,50,600,700);
			
			settextstyle(BOLD_FONT,HORIZ_DIR,3);
    		outtextxy(780,220,"Name    : Shivansh Sharma");
			outtextxy(780,250,"Roll no : 760339"); 
			delay(2500); 
			
			menu();
			
		//	_getch();
		//	closegraph();  	
	}			
		
};

int main()
{
	Diabetes d1;
	d1.getdata();
	d1.welcome_screen();
	d1.display();
	d1.menu();


	
}
