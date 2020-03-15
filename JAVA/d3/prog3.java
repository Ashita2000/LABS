import java.util.Scanner;

class  account{
	private int id;
	private float balance;

	account(int inId,float inBalance){
		id=inId;
		balance=inBalance;
	}

	public void debit(float inWithdraw){
		if(inWithdraw>balance)
			System.out.println("Insufficient Balance\nYour Balance is Rs."+balance);
		else{
			balance-=inWithdraw;
			System.out.println("Rs."+inWithdraw+ " withdrawn from your account\nNew balance :Rs."+balance);
		}

	}
}

class Prog3
{
	public static void main(String[] args)  {
		Scanner sc=new Scanner(System.in);
		
		account a[]=new account[5];

		for(int i=0;i<5;i++)
		{
			a[i]=new account(i+1,(100-i)*(i+1));
		}

		System.out.print("\nEnter your id (1-5)  and amount to withdraw :");
		int choice=sc.nextInt();
		float amt=sc.nextFloat();

		a[choice-1].debit(amt);
	}
}