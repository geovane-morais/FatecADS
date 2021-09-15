package projetoComputador;

public class ComputadorTeste
{
	public static void main(String[] args)
	{	
		Computador computadorHp = new Computador();
		computadorHp.setMarca("HP");
		computadorHp.setCor ("preto");
		computadorHp.setModelo("gamer");
		computadorHp.setNumeroSerie(17775);
		computadorHp.setPreco((double)1750);
		
		computadorHp.imprimir ();
		computadorHp.calcularValor();
		System.out.println("\n***********************");
		computadorHp.imprimir ();
		
		Computador computadorIBM = new Computador();
		computadorIBM.setMarca("IBM");
		computadorIBM.setCor ("prata");
		computadorIBM.setModelo("desktop");
		computadorIBM.setNumeroSerie(17685);
		computadorIBM.setPreco(2950);
		
		computadorIBM.imprimir ();
		computadorIBM.calcularValor();
		System.out.println("\n***********************");
		computadorIBM.imprimir ();
		
		computadorIBM.alterarValor(2700);
		System.out.println("\n***********************");
		computadorIBM.imprimir();
	}
}
