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

int xcoord = 6;
int ycoord = 0;
int win = 0;




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



  CheckButtonsPress();
  if (Button_Right)
  {         
    if (xcoord < 7)
    { 
      if(ReadPx(xcoord+1, ycoord) == Orange)
      {  
    } 
     
  else
  {
    xcoord++;
  }
   

  }
 
   
  }
  if(Button_Up)
  {
    if (ycoord < 7)
    {
      if(ReadPx(xcoord, ycoord+1) == Orange)
      {
      }    
     else
     {
       ycoord++;
     }
    
   
  }     
} 
    
  if(Button_Down)
  {  
    if (ycoord > 0)
    {
      if(ReadPx(xcoord, ycoord-1) == Orange)
      {
      }
      else
      {
        ycoord--;
      }
     
}  
   
  }
  
  if (Button_Left)
  {   
    if (xcoord > 0)
    {
      if(ReadPx(xcoord-1, ycoord) == Orange)      
      {
      }
      else 
      {
        xcoord--;
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
  
  
  
  
  
  if (win > 0)
    {
      if(ReadPx(xcoord, ycoord) == Green)      
     
      
 { 
   
   
   
 
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
 }
    }    
  
}  

