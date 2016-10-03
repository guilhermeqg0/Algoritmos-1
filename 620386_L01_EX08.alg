
inicio
    REAL Deposito, Taxa_juros, Rendimento_mensal, Valor_total
    
    ESCREVER "Informe a quantia que deseja depositar: "
    LER Deposito
    
    ESCREVER "Entre com a taxa de juros mensal: "
    LER Taxa_juros
    
    Valor_Total <- Deposito + (deposito * taxa_juros / 100)
    
    ESCREVER "\nEste será o seu valor total com o rendimento: ", valor_total
    
    Rendimento_mensal <- deposito - (deposito * taxa_juros / 100)
    
    ESCREVER "\nEste será o seu rendimento mensal: ", rendimento_mensal
    
	
fim
