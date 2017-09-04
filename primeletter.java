import java.util.*;
public class primeletter
{
	int count=0; 
String str="";
  public void word(int n,String ch)
  {

    String  one[]={"","one","two","three","four","five","six","seven","eight","Nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};

    String ten[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

    if(n > 19) {str=str+ten[n/10]+one[n%10];} else { str=str+one[n];}
    if(n > 0){str=str+ch;
	}
	
  }
void prime(){
int coun=0;
int len=str.length();
for(int j=2;j<len;j++)
{
if(len%j==0){
coun++;
}
}
if(coun==0){count++;}
str="";
}
  public static void main(String[] args)
  {
    int n=0,a,b;
 primeletter ob = new primeletter();
    Scanner sc = new Scanner(System.in);
    a = sc.nextInt();
    b= sc.nextInt();
   for(int i=a+1;i<b;i++)
   {
 
      ob.word((i/1000000000),"Hundred");
      ob.word((i/10000000)%100,"crore");
      ob.word(((i/100000)%100),"lakh");
      ob.word(((i/1000)%100),"thousand");
      ob.word(((i/100)%10),"hundred");
      ob.word((i%100)," ");

ob.prime();
    }
System.out.println(ob.count);
  }
}