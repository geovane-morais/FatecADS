package software;
import java.util.Scanner;

public class minhasFuncoes {
	
	private int foo=0,bar=0,val=0;
	private String nome;
	Conta usuario[] = new Conta[100];
	Scanner entrada= new Scanner(System.in);
	
	void sacar() 
	{
		String nome = "";
		System.out.println("\nInforme o nome do titular:");
		System.out.print("Entrada:");
		nome = entrada.nextLine();
		
		for(bar=0,val=0;bar<foo;bar++)
		{
			while(nome.equals(usuario[bar].getNomeCliente()))
			{ 
				System.out.println("Informe a quantia desejada em R$(saldo:"+usuario[bar].getSaldo()+")");
				System.out.print("Entrada:");
				if (usuario[bar].sacar(Double.parseDouble(entrada.nextLine())) == 1)
				{
					System.out.println("**Saque Realizado\n");
					val++;
					break;
				} 
				else
				{
					System.out.println("\n**Saldo insuficiente (R$0 cancela)**");
				}
			}	
		}
		if(val == 0)
		{
			System.out.println("**ERRO:Usuario Invalido**");
		}
	}

	void depositar()
	{
		System.out.println("\nInforme o nome do titular");
		System.out.print("Entrada:");
		nome = entrada.nextLine();
		
		for(bar=0,val=0;bar<foo;bar++)
		{
			if(nome.equals(usuario[bar].getNomeCliente()))
			{ 
				System.out.println("Informe a quantia em R$");
				System.out.print("Entrada:");
				usuario[bar].depositar(Double.parseDouble(entrada.nextLine()));
				System.out.println("**Deposito Realizado\n");
				val++;
			}	
		}
		if(val == 0) 
		{
			System.out.println("**ERRO:Usuario Invalido**");
		}
	}

	void consultar()
	{
		System.out.println("\nInforme o nome do titular");
		System.out.print("Entrada:");
		nome = entrada.nextLine();
		
		for(bar=0,val=0;bar<foo;bar++)
		{
			if(nome.equals(usuario[bar].getNomeCliente()))
			{ 
				usuario[bar].imprimir();
				val++;
			}	
		}
		if(val == 0) 
		{
			System.out.println("**ERRO:Usuario Invalido**");
		}
	}

	void cadastrar()
	{	
		System.out.println("\nInforme o nome do cliente: ");
		
		if (usuario[foo] == null) 
		{
			usuario[foo] = new Conta();
		}
		
		usuario[foo].setConta(Integer.toString(foo));
		usuario[foo].setAgencia("007");
		usuario[foo].setSaldo(0);
		usuario[foo].setNomeCliente(entrada.nextLine());
		System.out.println("**Cadastrado Completo\n");
		foo++;
	}
}
