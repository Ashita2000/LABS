import java.util.Scanner;

class salary{
	private int id;
	private float salary,salaryPerHour,hours;

	public void getData(int inId,float inSalaryPerHour, float inHour){
		id=inId;
		salaryPerHour=inSalaryPerHour;
		hours=inHour;

		if(hours<=40)
			salary=hours*salaryPerHour;

		else{
			salary=40*salaryPerHour;
			salary+=(hours-40)*salaryPerHour/2;
		}

	}

	public float print(){
		return salary;
	}
}

class Prog4
{
	public static void main(String[] args)  {
		Scanner sc=new Scanner(System.in);
		
		salary s[]=new salary[3];

		for(int i=1;i<=3;i++)
		{
			s[i-1]=new salary();
			System.out.println("Enter the Salary/hr (in Rs.) and Total work hours for Worker"+i);
			float inSalaryPerHour,inHours;
			int inId=1;
			inSalaryPerHour=sc.nextFloat();
			inHours=sc.nextFloat();
			s[i-1].getData(inId,inSalaryPerHour,inHours);
		}

		for(int i=1;i<=3;i++)
		{
			float ans=s[i-1].print();
			System.out.println("Gross Salary of worker with ID="+i+" is Rs."+ans);
		}


	}
}