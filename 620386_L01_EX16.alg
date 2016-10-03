
inicio
	REAL Salario, cheque_1, cheque_2, saldo_atual, retirada1, retirada2
    
    ESCREVER "Informe o seu salário: "
    LER salario
    
    ESCREVER "Digite a quantia a ser retirada: "
    LER retirada1
    
    ESCREVER "Digite a quantia a ser retirada: "
    LER retirada2
   
    cheque_1 <- salario - salario * 0.0038 - retirada1
    
    cheque_2 <- cheque_1 - (cheque_1 * 0.0038) - retirada2
    
    
    saldo_atual <- cheque_2  
    
    ESCREVER "Este é o seu saldo atual: ", saldo_atual
    
fim
