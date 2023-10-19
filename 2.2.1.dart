void main(){
  List MAYUR = [1, "MAYUR", 74525, 5425.5454, true];
  print(MAYUR);

  MAYUR.add("BHARAT");
  print(MAYUR);

  MAYUR.addAll([123, "KANJI", 2.154]);
  print(MAYUR);

  MAYUR.insert(2,99.99);
  print(MAYUR);

  MAYUR.insertAll(4,["JAY", 84.123,false]);
  print(MAYUR);

  int a=MAYUR.length;
  //print(a);
  print("LENGHTH OF LIST IS : $a");

  

}