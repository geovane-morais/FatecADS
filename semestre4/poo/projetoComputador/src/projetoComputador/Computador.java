package projetoComputador;

public class Computador {
	private String marca;
	private String cor;
	private String modelo;
	private long numeroSerie;
	private double preco;
	
	public void setMarca (String marca)
	{
		this.marca = marca;
	}
	
	public void setCor (String cor)
	{
		this.cor = cor;
	}
	
	public void setModelo (String modelo)
	{
		this.modelo = modelo;
	}
	
	public void setNumeroSerie (long numeroSerie)
	{
		this.numeroSerie = numeroSerie;
	}
	
	public void setPreco (double preco)
	{
		this.preco = (double) preco;
	}
	
	public void imprimir ()
	{
		System.out.println("Marca: " + marca);
		System.out.println("Cor: " + cor);
		System.out.println("Modelo: " + modelo);
		System.out.println("Numero de Serie: " + numeroSerie);
		System.out.println("Preco: " + preco);
	}
	
	public void calcularValor () 
	{
		
		if(marca == "HP") {
			preco+= (double)preco*0.3;
		}
		else if (marca == "IBM"){
			preco += (double)preco*0.5;
		}
		else {
			preco = (double)preco;
		}
		
	}
	
	public int alterarValor (double val) 
	{
		if(val > 0) {
			preco = (double)val;
			return 1;
		}
		return 0;
	}

}
