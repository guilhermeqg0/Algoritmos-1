
inicio
	REAL preco_fabrica, p_lucro, lucro, p_impostos, impostos, preco_final
    
    ESCREVER "Informe o preço de fabrica do veículo: "
    LER preco_fabrica
    
    ESCREVER "Informe o percentual de lucro: "
    ler p_lucro
           
    ESCREVER "Informe o percentual de impostos: "
    LER p_impostos
                    
    lucro <- (p_lucro / 100) * preco_fabrica
    
    impostos <- (p_impostos / 100) * preco_fabrica
    
    preco_final <- lucro + impostos + preco_fabrica
    
    ESCREVER "O lucro da fábrica é de: ", lucro
    
    ESCREVER "\nOs impostos são de: ", impostos
    
    ESCREVER "\nO preço final do veículo é de: ", preco_final
    
    
fim
