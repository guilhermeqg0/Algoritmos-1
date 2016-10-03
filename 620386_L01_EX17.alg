
inicio
	real peso_saco, racao_gato1, racao_gato2, restante

    ESCREVER "Informe o peso do saco de ração: "   
    LER peso_saco
    
    peso_saco <- peso_saco * 1000
    
    ESCREVER "Informe a quantidade de ração à ser dada ao gato 1: "
    LER racao_gato1
    
    ESCREVER "Informa a quantidade de ração à ser dada ao gato 2: "
    LER racao_gato2
    
    restante <- peso_saco - racao_gato1 * 5 - racao_gato2 * 5
    
    ESCREVER "Restará no saco após 5 dias: ", restante
fim
