
inicio
	real peso_saco, racao_gato1, racao_gato2, restante

    ESCREVER "Informe o peso do saco de ra��o: "   
    LER peso_saco
    
    peso_saco <- peso_saco * 1000
    
    ESCREVER "Informe a quantidade de ra��o � ser dada ao gato 1: "
    LER racao_gato1
    
    ESCREVER "Informa a quantidade de ra��o � ser dada ao gato 2: "
    LER racao_gato2
    
    restante <- peso_saco - racao_gato1 * 5 - racao_gato2 * 5
    
    ESCREVER "Restar� no saco ap�s 5 dias: ", restante
fim
