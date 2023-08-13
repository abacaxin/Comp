# Comp

Esta biblioteca foi desenvolvida para que se possa ter um simple controle de portas digitais
Como o meu intuito era por em prática os conhecimentos sobre criação de bibliotecas decidi 
fazer algo bássico

Para utilizar a biblioteca é bem simples

     Baixe o arquivo .zip através do link: "https://github.com/abacaxin/Comp.git" ;
     Abra a Arduno IDE;
     Na barra superior de menu, vá para sketch -> Incluir biblioteca -> Incluir biblioteca .zip;
     Selecione o arquivo que você baixou e clique em "OK" ou "abrir".


1-Passo:
Incluir a biblioteca no seu código 
Para incluir uma biblioteca no arduino utilizamos o comando "#include" e a seguir o nome da 
biblioteca desejada

Ex:
```cpp
#include <Comp.h>
```

2-Passo:
Declarar o meu componente, se eu estou querendo controlar um led por exemplo, eu chamo a classe 
'Comp', nomeio de acordo com a minha preferência e logo após eu declaro em qual porta este 
componente esta.

Ex:
```cpp
Comp Led(2);
``` 

Agora está tudo pronto, esta biblioteca possui 3 comandos básicos

I: .on() = Muda o pino par ao estado HIGH

II: .off()  = Muda o pino para o estado LOW

III: .change()  = Inverte o estado do pino 