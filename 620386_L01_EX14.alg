
inicio
	REAL preco_fabrica, p_lucro, lucro, p_impostos, impostos, preco_final
    
    ESCREVER "Informe o pre�o de fabrica do ve�culo: "
    LER preco_fabrica
    
    ESCREVER "Informe o percentual de lucro: "
    ler p_lucro
           
    ESCREVER "Informe o percentual de impostos: "
    LER p_impostos
                    
    lucro <- (p_lucro / 100) * preco_fabrica
    
    impostos <- (p_impostos / 100) * preco_fabrica
    
    preco_final <- lucro + impostos + preco_fabrica
    
    ESCREVER "O lucro da f�brica � de: ", lucro
    
    ESCREVER "\nOs impostos s�o de: ", impostos
    
    ESCREVER "\nO pre�o final do ve�culo � de: ", preco_final
    
    
fim
