void loop() {
  print_text("HARSH");
  delay(1000);
  for (int i=10;i>0;i--)
  {
    print_num(i);
    
    delay(1000);
  }
}
void print_text(char b[]) {
  display.clearDisplay();
  display.setTextSize(3);             // Normal 1:1 pixel scale
  display.setTextColor(WHITE);        // Draw white text
  display.setCursor(0,0);             // Start at top-left corner
  display.println(b);
  display.display();
}
void print_num(int num) {
  display.clearDisplay();
  display.setTextSize(5);             // Normal 1:1 pixel scale
  display.setTextColor(WHITE);        // Draw white text
  display.setCursor(40,10);             // Start at top-left corner
  display.println(num);
  display.display();
}
