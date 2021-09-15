package software;
import java.util.Scanner;

public class ContaTeste 
{	

	public static void main(String[] args)
	{	
		int select = 0;
		
		minhasFuncoes exec = new minhasFuncoes();
		Scanner entrada = new Scanner(System.in);
		
		do
		{
			System.out.println("**************************");
			System.out.println("*          MENU          *");
			System.out.println("* 1- Sacar               *");
			System.out.println("* 2- Depositar           *");
			System.out.println("* 3- Consultar           *");
			System.out.println("* 4- Cadastrar           *");
			System.out.println("* 5- Sair                *");
			System.out.println("*                        *");
			System.out.println("**************************");
			System.out.print("Entrada: ");
			
			select = Integer.parseInt(entrada.nextLine());
			
			switch (select) {
				case 1:
					exec.sacar();
				break;
					
				case 2:
					exec.depositar();
				break;
					
				case 3:
					exec.consultar();
				break;
					
				case 4:
					exec.cadastrar();
				break;
					
				case 5:
				break;	
					
				default:
					
				break;
			
			}
		} while (select != 5);
		
		System.out.print("\n***FIM***");
	}
}
