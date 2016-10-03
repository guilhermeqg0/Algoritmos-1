
inicio
	REAL numero, n_quadrado, n_cubo

    ESCREVER "Digite o numero escolhido: "
    LER numero 
              
         SE numero <= 0 ENTAO
             ESCREVER "O numero não pode ser zero "
         
         SENAO 
         
     n_quadrado <- numero * numero
     
     ESCREVER "O quadrado do número escolhido é: ", n_quadrado
          
     n_cubo <- numero * numero * numero
     
     ESCREVER "\nO cubo do número escolhido é: ", n_cubo        
             
       
     FIMSE 
     
fim
