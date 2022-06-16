package Ex.Celular;
import java.util.Scanner;


public class main 
{
    public static void main(String args[]) 
    { 
        Integer opcao=0,ativo = 0;
        Scanner input = new Scanner(System.in);
        celular celular = new celular();

        System.out.println("Informe o modelo: ");
        String modelo = input.nextLine();
        System.out.println("Informe o nivel da bateria: ");
        Integer nivelBateria = input.nextInt();
        System.out.println("Informe o nivel do som: ");
        Integer Som = input.nextInt();
        celular.celular(modelo, nivelBateria, Som);

        do
        {
            System.out.println("Selecione uma opção:");
            System.out.println("0 - Sair");
            System.out.println("1 - Ligar");
            System.out.println("2 - Recarregar");
            System.out.println("3 - Jogar");
            System.out.println("4 - Aumentar volume");
            System.out.println("5 - Diminuir volume");

            opcao = input.nextInt();
            switch(opcao)
            {
                case 1:
                    celular.Ligar();
                    ativo = 1;
                    break;
                case 2:
                    celular.Desligar();
                    ativo = 0;
                    break;
                case 3:
                    celular.aumentaSom();
                    break;
                case 4:
                    celular.diminuiSom();
                    break;
                case 5:
                    if(ativo == 1){
                        System.out.println("[0]Par ou [1]Impar");
                        Integer escolha = input.nextInt();
                        System.out.println(celular.Jogar(escolha));
                    }
                    break;
                case 6:
                    System.out.println("Numero Errado");
            }
        }while(opcao != 7);
    }
}