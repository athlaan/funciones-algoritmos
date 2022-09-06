int D = 20;
int x = 0;
int y = 200;
int px = 380;
int py = 170;
int vx = 1;
int vy = 2;

void setup(){
  size(400,400);
  background(0);
  fill(255);
}

void drawBall(int x, int y){
    ellipse(x,y,D,D)
}

void drawPaddle(int x, int y){

}


boolean isColliding(int bx, int by, int ){
  boolean result = false;
  if(bx+D/2 <= px && by+D/2 >= py) result = true;
  return result;
}

void walls(){
  if (x > width || x < 0) vx *= -1;
  if (y > width || y < 0) vy *= -1;
}

void update() {
  x += vx;
  y += vy;
}

void draw(){
  background(0);
  drawBall(x,y);
  x += vx;
  y += vy;
  update();
  walls();
  if (isColliding(x,y,px,py)) vx *= -1;
}



void keyPressed(){

}
