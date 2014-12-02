/*
  Maze_Game.pde
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
Maze Game
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int xcoord = 0;
int ycoord = 0;
int win = 0;
int loose = 0;
int power = 0;



void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.




}

void loop()
{
  
  
 
  
 if(ReadPx(xcoord, ycoord) == Green)
  {
   win = 1;
  }

 if(ReadPx(xcoord, ycoord) == Red)
  {
   loose = 1;
  } 

 if(ReadPx(xcoord, ycoord) == White)
  {
   power = 1;
  } 


  CheckButtonsPress();
  if (Button_Right)
  {         
    if (xcoord < 7)
    { 
      if(ReadPx(xcoord+1, ycoord) == Orange)
      {  
        if (power > 0)
          { 
            xcoord++;
          } 
        Tone_Start(9000, 50);
      } 
     
  else
  {
    xcoord++;
    Tone_Start(9000, 50);
  }
   

  }
 
   
  }
  if(Button_Up)
  {
    if (ycoord < 7)
    {
      if(ReadPx(xcoord, ycoord+1) == Orange)
      {
        if (power > 0)
          { 
            ycoord++;
          } 
        Tone_Start(9000, 50);
      }    
     else
     {
       ycoord++;
       Tone_Start(9000, 50);
     }
    
   
  }     
} 
    
  if(Button_Down)
  {  
    if (ycoord > 0)
    {
      if(ReadPx(xcoord, ycoord-1) == Orange)
      {
        if (power > 0)
          { 
            ycoord--;
          } 
        Tone_Start(9000, 50);
      }
      else
      {
        ycoord--;
        Tone_Start(9000, 50);
      }
     
    }  
   
  }
  
  if (Button_Left)
  {   
    if (xcoord > 0)
    {
      if(ReadPx(xcoord-1, ycoord) == Orange)      
      {
        if (power > 0)
          { 
            xcoord--;
          } 
        Tone_Start(9000, 50);
      }
      else 
      {
        xcoord--;
        Tone_Start(9000, 50);
      }
     }
     
  }

  DrawPx(xcoord,ycoord,Blue);
  
  DisplaySlate();
  delay(1);
  ClearSlate();
  
  DrawPx(5,0,2);
  DrawPx(5,1,2);
  DrawPx(5,2,2);
  DrawPx(5,3,2);
  DrawPx(5,4,2);
  
  DrawPx(1,1,2);
  DrawPx(1,2,2);
  DrawPx(1,0,2);
  DrawPx(1,3,2);
  DrawPx(1,4,2);
  
  DrawPx(3,7,2);
  DrawPx(3,6,2);
  DrawPx(3,5,2);
  DrawPx(3,4,2);
  
  DrawPx(7,0,Green);
  
  DrawPx(3,2,Red);
  DrawPx(3,1,Red);
  DrawPx(0,6,Red);
  DrawPx(1,6,Red);
  DrawPx(6,1,Red); 
  DrawPx(6,2,Red);
  DrawPx(3,1,Red);
  DrawPx(7,4,Red);
  DrawPx(7,5,Red);
  DrawPx(0,7,White);
  
  
  
  if (win > 0)
    {
      if(ReadPx(xcoord, ycoord) == Green)      
     
      
       { 
   
          
  ClearSlate();
   
 
          DrawPx(1,6,Green);
          DrawPx(2,6,Green);
          DrawPx(3,6,Green);
          DrawPx(1,5,Green);
          DrawPx(1,4,Green);
          DrawPx(2,4,Green);
          DrawPx(3,4,Green);  
          DrawPx(3,5,Green);
      
          DrawPx(4,6,Green);
          DrawPx(4,5,Green);
          DrawPx(4,4,Green);
          DrawPx(5,4,Green);
          DrawPx(6,4,Green);
          DrawPx(6,5,Green);
          DrawPx(6,6,Green);
          DrawPx(5,6,Green);
          DrawPx(4,6,Green);
      
          DrawPx(1,2,Green);
          DrawPx(1,1,Green);
          DrawPx(2,1,Green);
          DrawPx(3,1,Green);
          DrawPx(4,1,Green);
          DrawPx(5,1,Green);
          DrawPx(6,1,Green);
          DrawPx(6,2,Green);
          DrawPx(5,2,Green);
          DrawPx(4,2,Green);
          DrawPx(3,2,Green);
          DrawPx(2,2,Green);
          Tone_Start(18183, 50);
          DisplaySlate();
          delay(1000);
          NewGame();
          
       }
    }    
    
      if (loose > 0)
    {
      if(ReadPx(xcoord, ycoord) == Red)      
     
      
       { 
   
          
    ClearSlate();
 
   
 
          DrawPx(1,6,1);
          DrawPx(2,6,1);
          DrawPx(3,6,1);
          DrawPx(1,5,1);
          DrawPx(1,4,1);
          DrawPx(2,4,1);
          DrawPx(3,4,1);  
          DrawPx(3,5,1);
      
          DrawPx(4,6,1);
          DrawPx(4,5,1);
          DrawPx(4,4,1);
          DrawPx(5,4,1);
          DrawPx(6,4,1);
          DrawPx(6,5,1);
          DrawPx(6,6,1);
          DrawPx(5,6,1);
          DrawPx(4,6,1);
      
          DrawPx(1,2,1);
          DrawPx(1,1,1);
          DrawPx(2,1,1);
          DrawPx(3,1,1);
          DrawPx(4,1,1);
          DrawPx(5,1,1);
          DrawPx(6,1,1);
          DrawPx(6,2,1);
          DrawPx(5,2,1);
          DrawPx(4,2,1);
          DrawPx(3,2,1);
          DrawPx(2,2,1);
          Tone_Start(ToneC3, 50);
          DisplaySlate();
          delay(1000);
          NewGame();
       }
    }   
    
    if (power > 0)
    {
      if(ReadPx(xcoord, ycoord) == White)             
       { 
         Tone_Start(9000, 50);
         delay(100);
         Tone_Start(7000, 50);
         delay(100);       
         power = 1;
       }
    }    
  
}  

void NewGame()
{
  ClearSlate();
  xcoord = 0;
  ycoord = 0;
  DisplaySlate();
 
}

