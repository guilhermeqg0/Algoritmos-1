
inicio
	REAL salario_minimo, quantidade_qw, qw_unitario, valor_pagar, valor_desconto, numero_dias

    ESCREVER "Informe o seu salário: "
    LER salario_minimo
    
    ESCREVER "Informe a quantidade de Quillowatt: "
    LER quantidade_qw
    
    qw_unitario <- salario_minimo / 5
    
    ESCREVER "O valor de cada Quillowatt é de: ", qw_unitario
            
    valor_pagar <- quantidade_qw * qw_unitario
    
    ESCREVER "\nO valor a pagar é de: ", valor_pagar
    
    valor_desconto <- valor_pagar * 0.085
    
    ESCREVER "\nO valor com desconto pagar é de: ", valor_desconto
    
    
    
fim
