#include <SoftwareSerial.h>

/*
  This program blinks pin 13 of the Arduino (the
  built-in LED)
*/

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop()
{
 
  char s[]="alibaba",ch;
  char morse[100]="";
 for(int i=0;s[i]!='\0';i++)
  {
   ch=s[i];
     			if (ch == 'a' || ch == 'A')
                {
       
                   strcat(morse,".- ");   // morse += ".- ";
                }
                else if (ch == 'b' || ch == 'B')
                {
                 strcat(morse,"-... ");   //  	 morse += "-... ";
                }
                else if (ch == 'c' || ch == 'C')
                {
                    strcat(morse,"-.-. ");   //morse += "-.-. ";
                }
                else if (ch == 'd' || ch == 'D')
                {
                    strcat(morse,"-.. ");   //morse += "-.. ";
                }
                else if (ch == 'e' || ch == 'E')
                {
                    strcat(morse,". ");   //morse += ". ";
                }
                else if (ch == 'f' || ch == 'F')
                {
                    strcat(morse,"..-. ");   //morse += "..-. ";
                }
                else if (ch == 'g' || ch == 'G')
                {
                    strcat(morse,"--. ");   //morse += "--. ";
                }
                else if (ch == 'h' || ch == 'H')
                {
                    strcat(morse,".... ");   //morse += ".... ";
                }
                else if (ch == 'i' || ch == 'I')
                {
                    strcat(morse,".. ");   //morse += ".. ";
                }
                else if (ch == 'j' || ch == 'J')
                {
                    strcat(morse,".--- ");   //morse += ".--- ";
                }
                else if (ch == 'k' || ch == 'K')
                {
                    strcat(morse,"-.- ");   //morse += "-.- ";
                }
                else if (ch == 'l' || ch == 'L')
                {
                    strcat(morse,".-.. ");   //morse += ".-.. ";
                }
                else if (ch == 'm' || ch == 'M')
                {
                    strcat(morse,"-- ");   //morse += "-- ";
                }
                else if (ch == 'n' || ch == 'N')
                {
                    strcat(morse,"-. ");   //morse += "-. ";
                }
                else if (ch == 'o' || ch == 'O')
                {
                    strcat(morse,"--- ");   //morse += "--- ";
                }
                else if (ch == 'p' || ch == 'P')
                {
                    strcat(morse,".--. ");   //morse += ".--. ";
                }
                else if (ch == 'Q' || ch == 'q')
                {
                    strcat(morse,"--.- ");   //morse += "--.- ";
                }
                else if (ch == 'r' || ch == 'R')
                {
                    strcat(morse,".-. ");   //morse += ".-. ";
                }
                else if (ch == 's' || ch == 'S')
                {
                    strcat(morse,"... ");   //morse += "... ";
                }
                else if (ch == 'T' || ch == 't')
                {
                    strcat(morse,"- ");   //morse += "- ";
                }
                else if (ch == 'u' || ch == 'U')
                {
                    strcat(morse,"..- ");   //morse += "..- ";
                }
                else if (ch == 'V' || ch == 'v')
                {
                    strcat(morse,"...- ");   //morse += "...- ";
                }
                else if (ch == 'w' || ch == 'W')
                {
                    strcat(morse,".-- ");   //morse += ".-- ";
                }
                else if (ch == 'x' || ch == 'X')
                {
                    strcat(morse,"-..- ");   //morse += "-..- ";
                }
                else if (ch == 'y' || ch == 'Y')
                {
                    strcat(morse,"-.-- ");   //morse += "-.-- ";
                }
                else if (ch == 'z' || ch == 'Z')
                {
                    strcat(morse,"--.. ");   //morse += "--.. ";
                }
                else if (ch == ' ')
                {
                    strcat(morse,"/");   //morse += "/";
                }
                
  }
  for(int u=0;morse[u]!='\0';u++)
  {
    	if(morse[u]=='.')
        {
          //
          digitalWrite(13,HIGH);
          delay(100);
          digitalWrite(13,LOW);
          if(morse[u+1]!=' ')
          delay(300);
        }
    	else if(morse[u]=='-')
        {
          //
          digitalWrite(13,HIGH);
          delay(600);
          digitalWrite(13,LOW);
          if(morse[u+1]!=' ')
          delay(300);
        }
    	else if(morse[u]=='/')
        {
          //
          delay(900);
          
        }
    	else if(morse[u]==' ')
        {
          //
          delay(500);
        }
  }
 
  
   Serial.println(morse);
  delay(1000);
}