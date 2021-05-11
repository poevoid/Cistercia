//cistercian number counter for arduboy
#include <Arduboy2.h>
#include "arrays.h"
#include <Tinyfont.h>

Arduboy2 arduboy;
Tinyfont tinyfont = Tinyfont(arduboy.sBuffer, Arduboy2::width(), Arduboy2::height());

int counter = 0;
int c = 120; //cistercian x coord
void drawUnits() {
  if (counter == 0) {
    Sprites::drawSelfMasked(c, 0, cistercian0, 0);
  }
  if (counter == 1) {
    Sprites::drawSelfMasked(c, 0, cistercian1, 0);
  }
  if (counter == 2) {
    Sprites::drawSelfMasked(c, 0, cistercian2, 0);

  }
  if (counter == 3) {
    Sprites::drawSelfMasked(c, 0, cistercian3, 0);
  }
  if (counter == 4) {
    Sprites::drawSelfMasked(c, 0, cistercian4, 0);
  }
  if (counter == 5) {
    Sprites::drawSelfMasked(c, 0, cistercian1, 0);
    Sprites::drawSelfMasked(c, 0, cistercian4, 0);
  }
  if (counter == 6) {
    Sprites::drawSelfMasked(c, 0, cistercian6, 0);

  }
  if (counter == 7) {
    Sprites::drawSelfMasked(c, 0, cistercian1, 0);
    Sprites::drawSelfMasked(c, 0, cistercian6, 0);
  }
  if (counter == 8) {
    Sprites::drawSelfMasked(c, 0, cistercian6, 0);
    Sprites::drawSelfMasked(c, 0, cistercian2, 0);
  }
  if (counter == 9) {
    Sprites::drawSelfMasked(c, 0, cistercian6, 0);
    Sprites::drawSelfMasked(c, 0, cistercian2, 0);
    Sprites::drawSelfMasked(c, 0, cistercian1, 0);
  }
}

void drawTens() {
  if (counter >= 10 && counter < 20) {
    Sprites::drawSelfMasked(c, 0, cistercian10, 0);
    counter -= 10; //subtract ten to count the units
    drawUnits();
    counter += 10; //add it back
  }
  if (counter >= 20 && counter < 30) {
    Sprites::drawSelfMasked(c, 0, cistercian20, 0);
    counter -= 20; //subtract ten to count the units
    drawUnits();
    counter += 20; //add it back
  }
  if (counter >= 30 && counter < 40) {
    Sprites::drawSelfMasked(c, 0, cistercian30, 0);
    counter -= 30; //subtract ten to count the units
    drawUnits();
    counter += 30; //add it back
  }
  if (counter >= 40 && counter < 50) {
    Sprites::drawSelfMasked(c, 0, cistercian40, 0);
    counter -= 40; //subtract ten to count the units
    drawUnits();
    counter += 40; //add it back
  }
  if (counter >= 50 && counter < 60) {
    Sprites::drawSelfMasked(c, 0, cistercian10, 0);
    Sprites::drawSelfMasked(c, 0, cistercian40, 0);
    counter -= 50; //subtract ten to count the units
    drawUnits();
    counter += 50; //add it back
  }
  if (counter >= 60 && counter < 70) {
    Sprites::drawSelfMasked(c, 0, cistercian60, 0);
    counter -= 60; //subtract ten to count the units
    drawUnits();
    counter += 60; //add it back
  }
  if (counter >= 70 && counter < 80) {
    Sprites::drawSelfMasked(c, 0, cistercian60, 0);
    Sprites::drawSelfMasked(c, 0, cistercian10, 0);
    counter -= 70; //subtract ten to count the units
    drawUnits();
    counter += 70; //add it back
  }
  if (counter >= 80 && counter < 90) {
    Sprites::drawSelfMasked(c, 0, cistercian60, 0);
    Sprites::drawSelfMasked(c, 0, cistercian20, 0);
    counter -= 80; //subtract ten to count the units
    drawUnits();
    counter += 80; //add it back
  }
  if (counter >= 90 && counter < 100) {
    Sprites::drawSelfMasked(c, 0, cistercian60, 0);
    Sprites::drawSelfMasked(c, 0, cistercian20, 0);
    Sprites::drawSelfMasked(c, 0, cistercian10, 0);
    counter -= 90; //subtract ten to count the units
    drawUnits();
    counter += 90; //add it back
  }

}

void drawHundreds() {
  if (counter >= 100 && counter < 200) {
    Sprites::drawSelfMasked(c, 0, cistercian100, 0);
    counter -= 100; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 100; //add it back
  }
  if (counter >= 200 && counter < 300) {
    Sprites::drawSelfMasked(c, 0, cistercian200, 0);
    counter -= 200; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 200; //add it back
  }
  if (counter >= 300 && counter < 400) {
    Sprites::drawSelfMasked(c, 0, cistercian300, 0);
    counter -= 300; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 300; //add it back
  }
  if (counter >= 400 && counter < 500) {
    Sprites::drawSelfMasked(c, 0, cistercian400, 0);
    counter -= 400; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 400; //add it back
  }
  if (counter >= 500 && counter < 600) {
    Sprites::drawSelfMasked(c, 0, cistercian100, 0);
    Sprites::drawSelfMasked(c, 0, cistercian400, 0);
    counter -= 500; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 500; //add it back
  }
  if (counter >= 600 && counter < 700) {
    Sprites::drawSelfMasked(c, 0, cistercian600, 0);
    counter -= 600; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 600; //add it back
  }
  if (counter >= 700 && counter < 800) {
    Sprites::drawSelfMasked(c, 0, cistercian600, 0);
    Sprites::drawSelfMasked(c, 0, cistercian100, 0);
    counter -= 700; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 700; //add it back
  }
  if (counter >= 800 && counter < 900) {
    Sprites::drawSelfMasked(c, 0, cistercian600, 0);
    Sprites::drawSelfMasked(c, 0, cistercian200, 0);
    counter -= 800; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 800; //add it back
  }
  if (counter >= 900 && counter < 1000) {
    Sprites::drawSelfMasked(c, 0, cistercian600, 0);
    Sprites::drawSelfMasked(c, 0, cistercian200, 0);
    Sprites::drawSelfMasked(c, 0, cistercian100, 0);
    counter -= 900; //subtract ten to count the units
    drawUnits();
    drawTens();
    counter += 900; //add it back
  }
}

void drawThousands() {
  if (counter >= 1000 && counter < 2000) {
    Sprites::drawSelfMasked(c, 0, cistercian1000, 0);
    counter -= 1000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 1000; //add it back
  }
  if (counter >= 2000 && counter < 3000) {
    Sprites::drawSelfMasked(c, 0, cistercian2000, 0);
    counter -= 2000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 2000; //add it back
  }
  if (counter >= 3000 && counter < 4000) {
    Sprites::drawSelfMasked(c, 0, cistercian3000, 0);
    counter -= 3000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 3000; //add it back
  }
  if (counter >= 4000 && counter < 5000) {
    Sprites::drawSelfMasked(c, 0, cistercian4000, 0);
    counter -= 4000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 4000; //add it back
  }
  if (counter >= 5000 && counter < 6000) {
    Sprites::drawSelfMasked(c, 0, cistercian1000, 0);
    Sprites::drawSelfMasked(c, 0, cistercian4000, 0);
    counter -= 5000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 5000; //add it back
  }
  if (counter >= 6000 && counter < 7000) {
    Sprites::drawSelfMasked(c, 0, cistercian6000, 0);
    counter -= 6000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 6000; //add it back
  }
  if (counter >= 7000 && counter < 8000) {
    Sprites::drawSelfMasked(c, 0, cistercian6000, 0);
    Sprites::drawSelfMasked(c, 0, cistercian1000, 0);
    counter -= 7000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 7000; //add it back
  }
  if (counter >= 8000 && counter < 9000) {
    Sprites::drawSelfMasked(c, 0, cistercian6000, 0);
    Sprites::drawSelfMasked(c, 0, cistercian2000, 0);
    counter -= 8000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 8000; //add it back
  }
  if (counter >= 9000 && counter < 10000) {
    Sprites::drawSelfMasked(c, 0, cistercian6000, 0);
    Sprites::drawSelfMasked(c, 0, cistercian2000, 0);
    Sprites::drawSelfMasked(c, 0, cistercian1000, 0);
    counter -= 9000; //subtract ten to count the units
    drawUnits();
    drawTens();
    drawHundreds();
    counter += 9000; //add it back
  }
}

void drawCistercian() {
  drawUnits();
  drawTens();
  drawHundreds();
  drawThousands();

}



void setup() {
  // put your setup code here, to run once:
  arduboy.begin();
  arduboy.setFrameRate(30);//we don't need fast updates, even reducing to half the default(60->30) can save battery
  arduboy.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!arduboy.nextFrame()) return;
  arduboy.pollButtons();
  arduboy.clear();
  arduboy.setCursor(0, 0);
  arduboy.print(counter);
  arduboy.setCursor(WIDTH / 2 - 4, 0);
  arduboy.print("=");
  tinyfont.setCursor(0, 30);
  tinyfont.print(F("Press UP or DOWN: \n+/- fast as framerate \n\nPress LEFT or RIGHT:\n +/- by 1"));//welcome, explain controls, maybe short description of cistercian numbers.
  tinyfont.setCursor(0, 10);
  tinyfont.print(F("Arabic"));
  tinyfont.setCursor(80, 10);
  tinyfont.print(F("Cistercian"));
  drawCistercian();
  if (arduboy.pressed(UP_BUTTON) && counter < 9999) {
    counter++;
  }
  if (arduboy.pressed(DOWN_BUTTON) && counter >= 0) {
    counter--;
  }
  if (arduboy.justPressed(LEFT_BUTTON) && counter >= 0) {
    counter--;
  }
  if (arduboy.justPressed(RIGHT_BUTTON) && counter < 9999) {
    counter++;
  }
  arduboy.display();
}
