
inicio
	REAL numero, n_quadrado, n_cubo

    ESCREVER "Digite o numero escolhido: "
    LER numero 
              
         SE numero <= 0 ENTAO
             ESCREVER "O numero n�o pode ser zero "
         
         SENAO 
         
     n_quadrado <- numero * numero
     
     ESCREVER "O quadrado do n�mero escolhido �: ", n_quadrado
          
     n_cubo <- numero * numero * numero
     
     ESCREVER "\nO cubo do n�mero escolhido �: ", n_cubo        
             
       
     FIMSE 
     
fim
