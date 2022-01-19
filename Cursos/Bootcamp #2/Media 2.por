// esse programa calcula a media do aluno e se ele foi aprovado ou reprovado 
programa
{
	
	funcao inicio()
	{
		real nt1,nt2,nt3,nt4,media
		cadeia aluno
		
		escreva("Digite o nome do aluno:")
		leia(aluno)
		escreva("O seu nome é:" +aluno)
		escreva("Digite a nota 1:")
		leia(nt1)
		escreva("Digite a nota 2:")
		leia(nt2)
		escreva("Digite a nota 3:")
		leia(nt3)
		escreva("Digite a nota 4:")
		leia(nt4)
		
		media = (nt1+nt2+nt3+nt4)/4
		escreva("Sua media é:" + media)
		
		se (media>7){
			escreva("\n"+"Parabéns o aluno(a) " + aluno + " foi aprovado")
		}senao{
			escreva("\n"+"Infelizmente o aluno(a) " +aluno+ " foi reprovado")
		}

			
			
			
		
		

		
	}
}

/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 572; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */