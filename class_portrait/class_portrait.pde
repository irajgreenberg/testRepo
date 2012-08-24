String[] names = { "img01.jpg", "img02.jpg", "img03.jpg", "img04.jpg", "img05.jpg", "img06.jpg", "img07.jpg" };
PImage[] imgs = new PImage[7];

void setup(){
  size(1200, 800);
  background(0);
  for ( int i=0; i<names.length; i++){
    imgs[i] = loadImage(names[i]);
  }
  
}
