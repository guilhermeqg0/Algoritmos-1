
inicio
	REAL horas_trabalhadas, salario_minimo, salario_receber, salario_bruto, imposto

    ESCREVER "Informe o numero de horas trabalhadas: "
    LER horas_trabalhadas
    
    ESCREVER "Informe o salário mínimo: "
    LER salario_minimo
    
    salario_bruto <- horas_trabalhadas * (salario_minimo / 2)
    imposto <- salario_bruto * 0.03
    
    salario_receber <- salario_bruto - imposto
    
    ESCREVER "O seu salário a receber é de: ", salario_receber
    
fim
