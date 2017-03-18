#include "txLib.h"

//=============================================================================

void fon ();
void dom (int x, int y);
void treies (int x, int y, int eyes);
void man (int x, int y, int Hand);
void topor (int x, int y, int eyes);
void medved (int x, int y, int eye, double xzoom, double yzoom);
void tropinka (int x, int y);
void moveMedved ();
void moveMan ();
void moveManright ();
void moveManup ();
void moveManrright ();
void moveMantotaketopor ();
void moveMantaketopor ();
void moveMangoback ();
void moveManthgirr ();
void Manup ();
void moveManLeft ();
void Manputopor ();
void rubkadereva ();
void runvasyrun ();
void uhidotdereva ();
void idudomoi ();
void audio ();

//=============================================================================

int main()
    {
    audio ();
    txCreateWindow (1000, 600);
    txTextCursor (false);
    fon ();
    dom (850, 250);
    treies (200, 100, 1);
    man (150, 450, 450);
    topor (770, 65, 8);
    medved (450, 200,2, 0.7, 0.7);
    tropinka (300, 550);
    moveMedved ();
    moveMan ();
    moveManright ();
    moveManup ();
    moveManrright ();
    moveMantotaketopor ();
    moveMantaketopor ();
    moveMangoback ();
    moveManthgirr ();
    Manup ();
    moveManLeft ();
    Manputopor ();
    topor (350, 115, 8);
    rubkadereva ();
    runvasyrun ();
    uhidotdereva ();
    idudomoi ();
    txPlaySound (NULL);
    return 0;
    }

//=============================================================================

void dom (int x, int y)
    {
   /* txSetColor (RGB (128, 128, 0), 10);
    txSetFillColor (TX_BROWN);
    txRectangle (x - 250, y + 150, x - 150, y + 250); */
    txSetColor (RGB (0, 128, 128), 10);
    txLine (x + 50, y - 250, x + 50, y - 155);
    txLine (x + 55, y - 245, x + 146, y - 245);
    txLine (x + 146, y - 250, x + 146, y - 155);
    txLine (x + 146, y - 155, x + 50, y - 155);
    txSetColor (RGB (128, 0, 0), 10);
    txLine (x - 150, y - 250, x - 150, y + 350);
    txSetFillColor (TX_RED);
    txRectangle (x + 50, y - 50, x + 150, y - 249);
    txSetColor (RGB (160, 160, 160), 10);
    txLine (x + 50, y + 150, x + 150, y + 150);
    txLine (x + 50, y + 250, x + 50, y + 150);
    txLine (x - 50, y + 250, x + 50, y + 250);
    txLine (x - 50, y + 350, x - 50, y + 250);
    txSetFillColor (TX_GRAY);
    txFloodFill (950, 550);
    }

//=============================================================================

void fon()
    {
    txSetFillColor (TX_LIGHTGREEN);
    txClear ();
    }

//=============================================================================

void treies (int x, int y, int eyes)
    {
    txSetColor (RGB (128, 128, 0), 20);
    txLine (x - 0, y - 0, x - 0, y + 100);
    txSetColor (RGB (0, 128, 0), 100);
    txCircle (x - 0, y - 0, 1);
    txSetColor (RGB (255, 255, 255), 20);
    txCircle (x - 20, y - 10, eyes);
    txCircle (x + 20, y - 10, eyes);
    txSetColor (RGB (0, 0, 0), 6);
    txLine (x - 20, y -23, x +20, y - 23);
    txLine (x - 20, y + 20, x +20, y + 20);
    }

//=============================================================================

void man (int x, int y, int Hand)
    {
    txSetFillColor (TX_GRAY);
    txSetColor (RGB (0, 0, 0), 5);
    txLine (x - 50, y + 50, x - 0, y - 0);
    txLine (x - 0, y - 0, x + 50, y + 50);
    txLine (x - 0, y - 0, x - 0, y - 50);
    txLine (x - 0, y - 50, x - 50, y - 0);
    txLine (x - 0, y - 50, x + 50, y - Hand);
    txCircle (x - 0, y - 80, 30);
    txSetColor (RGB (255, 255, 255), 10);
    txCircle (x - 10, y - 85, 1);
    txCircle (x + 10, y - 85, 1);
    txSetColor (RGB (255, 255, 255), 5);
    txLine (x - 10, y - 75, x + 10, y - 75);
    }

//=============================================================================

void topor (int x, int y, int eyes)
    {
    POINT topor[8] = {{x - 32, y - 26}, {x - 36, y + 23}, {x - 19, y + 17}, {x + 16, y + 17}, {x + 27, y + 21}, {x + 26, y - 20}, {x + 10, y - 4}, {x - 15, y - 10}};
    txSetColor (RGB (128, 128, 0), 5);
    txLine (x + 10, y - 20, x + 5, y + 109);
    txSetColor (RGB (160, 160, 160), 1);
    txSetFillColor (TX_GRAY);
    txPolygon (topor, 8);
    txSetFillColor (TX_WHITE);
    txCircle (x - 22, y + 3, eyes);
    txCircle (x + 7, y + 5, eyes);
    txSetFillColor (TX_BLACK);
    txCircle (x - 22, y + 3, eyes/2);
    txCircle (x + 7, y + 5, eyes/2);
    txSetColor (RGB (0, 0, 0), 1);
    txEllipse (x - 12, y - 4, x - 3, y + 13);
    }

//=============================================================================

void medved (int x, int y, int eye, double xzoom, double yzoom)
     {
     txSetFillColor (RGB (74, 10, 10));
     txSetColor (RGB (74, 10, 10), 1);
     txEllipse (x - 84 * xzoom, y -29 * yzoom, x + 95 * xzoom, y+ 60 * yzoom);
     txEllipse (x - 78 * xzoom,y + 34 * yzoom, x - 35 * xzoom, y + 100 * yzoom);
     txEllipse (x + 48 * xzoom, y + 26 * yzoom, x + 87 * xzoom, y + 100 * yzoom);
     txEllipse (x + 50 * xzoom, y - 75 * yzoom, x + 130 * xzoom, y + 0 * yzoom);
     txEllipse (x + 106 * xzoom, y - 40 * yzoom, x + 135 * xzoom, y - 69 * yzoom);
     txEllipse (x + 40 * xzoom, y - 40 * yzoom, x + 79 * xzoom, y - 69 * yzoom);
     txSetFillColor (TX_PINK);
     txSetColor (RGB (255, 128, 255), 1);
     txEllipse (x + 77 * xzoom, y - 27 * yzoom, x + 102 * xzoom, y - 12 * yzoom);
     txSetFillColor (TX_RED);
     txSetColor (RGB ( 0, 0, 255), eye);
     txEllipse (x + 95 * xzoom, y - 55 * yzoom, x + 106 * xzoom, y - 44 * yzoom);
     txEllipse (x + 68 * xzoom, y - 55 * yzoom, x + 79 * xzoom, y - 44 * yzoom);
     txSetFillColor (TX_WHITE);
     txSetColor (RGB (255, 255, 255), 1);
     txEllipse (x - 97 * xzoom, y - 19 * yzoom, x - 60 * xzoom, y + 20 * yzoom);
     }

//=============================================================================

void tropinka (int x, int y)
     {
     txSetColor (RGB (192, 192, 192), 5);
     txSetFillColor (TX_LIGHTGRAY);
     txRectangle (x - 299, y + 50, x + 394, y - 50);
     }

//=============================================================================

void moveMedved()
     {
     int x = 450;
     int y = 200;
     int t = 0;
     while (x > 270)
         {
         fon ();
         medved (x, y, 2, -0.7, 0.7);
         man (150, 450, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t/2);
         tropinka (300, 550);
         x -= 5;
         y += 5;
         t ++;
         txSleep (25);
         }
     }

//=============================================================================

void moveMan()
     {
     int x = 150;
     int y = 450;
     int t = 0;
     while (y < 550)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363,1 + t % 5, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t/2);
        // x -= 5;
         y += 5;
         t ++;
         txSleep (10);
         }
     }

//=============================================================================

void moveManright ()
     {
     int x = 150;
     int y = 550;
     int t = 0;
     while (x < 600)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + t % 5 , -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t/2);
         x += 5;
         t ++;
         //y += 5;
         txSleep (10);
         }
     }

//=============================================================================

void moveManup ()
    {
     int x = 600;
     int y = 550;
     int t = 0;
     while (y > 425)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363,1 + t % 5, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t);
        // x -= 5;
         y -= 5;
         t ++;
         txSleep (30);
         }
     }

//=============================================================================

void moveManrright ()
     {
     int x = 600;
     int y = 425;
     int t = 0;
     while (x < 775)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + t % 5, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t);
         x += 5;
         //y -= 5;
         t ++;
         txSleep (30);
         }
     }

//=============================================================================

void moveMantotaketopor ()
     {
     int x = 775;
     int y = 425;
     int t = 0;
     while (y > 300)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + t % 5, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         topor (770, 65, t);
         //x -= 5;
         y -= 5;
         t ++;
         txSleep (30);
         }
     }

 //=============================================================================

 void moveMantaketopor ()
      {
      int x = 775;
      int y = 300;
      while (y > 250)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + y % 400, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         //topor (770, 65);
         //x -= 5;
         y -= 5;
         txSleep (30);
         }
     }

//=============================================================================

void moveMangoback ()
     {
      int x = 775;
      int y = 250;
      while (y < 425)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + y % 450, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         //topor (770, 65);
         //x -= 5;
         y += 5;
         txSleep (30);
         }
     }

//=============================================================================

void moveManthgirr ()
     {
      int x = 775;
      int y = 425;
      while (x > 600)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + x % 5, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         //topor (770, 65);
         x -= 5;
         //y += 5;
         txSleep (30);
         }
     }

 //=============================================================================

 void Manup ()
      {
      int x = 600;
      int y = 425;
      while (y > 160)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363 + y % 4, 1 + y % 4, -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         //topor (770, 65);
         //x -= 5;
         y -= 5;
         txSleep (30);
         }
     }

 //=============================================================================

 void moveManLeft ()
      {
      int x = 600;
      int y = 160;
      while (x > 300)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363 + x % 4, 1 + x % 5 , -0.7, 0.7);
         man (x, y, 0);
         dom (850, 250);
         treies (200, 100, 1);
         //topor (280, 200);
         x -= 5;
         //y -= 5;
         txSleep (30);
         }
     }

 //=============================================================================

 void Manputopor ()
      {
      int x = 300;
      int y = 160;
      int t = 0;
      while (x > 300)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363 + x % 3, 1 + t % 5, -0.7, 0.7);
         man (x, y, 0);
         topor (350, 115, 8);
         dom (850, 250);
         treies (200, 100, 1);
         x -= 5;
         t ++;
         //y -= 5;
         txSleep (30);
         }
     }

//=============================================================================

void rubkadereva ()
    {
      int t = 0;
      while (t < 90)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363,1 + t % 5, -0.7, 0.7);
         man (300, 160, t);
         topor (350, 115 - t, t/3);
         dom (850, 250);
         treies (200, 100, t/4);
         t ++;
         txSleep (0);
         }
     }


//=============================================================================

void runvasyrun ()
    {
      int t = 0;
      while (t < 90)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363,1 + t % 5, -0.7, 0.7);
         man (300, 160 + t, 90);
         topor (350, 115 - 90, 30);
         dom (850, 250);
         treies (200, 100, 90/4);
         t += 1;
         txSleep (0);
         }
     }


//=============================================================================
 void uhidotdereva ()
     {
     int t = 300;
      while (t < 500)
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363, 1 + t % 5, -0.7, 0.7);
         man (t, 250, 90);
         topor (350, 115 - 90, 30);
         dom (850, 250);
         treies (200, 100, 90/4);
         t += 1;
         txSleep (0);
         }
     }

//=============================================================================
 void idudomoi ()
    {
     int t = 250;                    //t = 250 251 252 253 254 255
      while (t < 350)            //t % 2 =  0   1   0   1   0   1
         {
         fon ();
         tropinka (300, 550);
         medved (270, 363 + t % 4,1 + t % 5 , -0.7, 0.7);
         man (500, t, t - 250);
         topor (350, 115 - 90, 30);
         dom (850, 250);
         treies (200, 100, 90/4 + t % 10);
         t += 1;
         txSleep (0);
         }
     }


//=============================================================================
void audio ()
    {
    txPlaySound ("vasya.wav");
    }




