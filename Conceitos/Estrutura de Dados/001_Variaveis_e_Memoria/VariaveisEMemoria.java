public class VariaveisEMemoria {
    public static void main(String[] args){
    
    //Cada variável tem: >> Um nome; Um tipo; Um valor; Um endereço. <<
    
            int a = 10;
    // >> Nome: a; Tipo: Inteiro; Valor: 10; <<
    // Int = 4 bytes;
    // Endereço: x + 3 (como tem 4 bytes)
    // (Endereço em bytes)


            int b, c;
    // >> Nome: b, c; Tipo: Inteiro; Valor: (?); <<
    // Mesmo quando o valor não é definido, as variáveis já terão um endereço na memória, e seu valor em seus respectivos bytes será uma sequência aleatória de bits. (lixo de memória)
    
            b = 20;
            c = a + b;

        System.out.println("Endereço de 'a': " + System.identityHashCode(a));
        System.out.println("Endereço de 'b': " + System.identityHashCode(b));
        System.out.println("Endereço de 'c': " + System.identityHashCode(c));

        // (O código acima não irá fornecer o endereço de memória real, mas sim um código hash que pode ser usado como uma referência "única" para o objeto.) 
        // (Porque em Java não é possível acessar diretamente o endereço de memória de uma variável como você faria em C ou C++.)


        }
    }