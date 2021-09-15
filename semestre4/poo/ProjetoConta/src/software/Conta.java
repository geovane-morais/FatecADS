package software;

public class Conta {
	private String conta;
	private String agencia;
	private double saldo;
	private String nomeCliente;
	
	void setConta (String conta) 
	{
		this.conta = conta;
	}
	
	void setAgencia (String agencia) 
	{
		this.agencia = agencia;
	}
	
	void setSaldo (double saldo) 
	{
		this.saldo = saldo;
	}
	
	void setNomeCliente (String nomeCliente) 
	{
		this.nomeCliente = nomeCliente;
	}
	
	String getConta () 
	{
		return(this.conta);
	}

	String getAgencia () 
	{
		return(this.agencia);
	}
	
	double getSaldo () 
	{
		return(this.saldo);
	}
	
	String getNomeCliente () 
	{
		return(this.nomeCliente);
	}
	
	int sacar(double val) {
		if (val <= saldo) 
		{
			this.saldo -= val;
			return 1;
		}
		return 0;
	}
	void depositar (double val)
	{
		this.saldo += val;
	}
	
	void imprimir() 
	{
		System.out.println("\n******************");
		System.out.println("Conta= " + this.conta);
		System.out.println("Agencia= " + this.agencia);
		System.out.println("Saldo= " + this.saldo);
		System.out.println("Nome= " + this.nomeCliente);
		System.out.println("******************\n");
	}
}
