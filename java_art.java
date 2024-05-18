public class Main {
    private static void print_A(int i){
        if(i==0)
            System.out.print("   ###    ");
        else if(i == 4) {
            for(int j = 0; j < 9; j++)
                System.out.print("#");
            System.out.print(" ");
        }
        else if(i == 5 || i == 6){
            for(int j = 0; j < 9; j++){
                if(j==0 || j == 1 || j==7 || j==8)
                    System.out.print("#");
                else
                    System.out.print(" ");
            }
            System.out.print(" ");
        }
        else{
            String hash = "##";
            for(int k=0;k<(3-i);k++)
                System.out.print(" ");
            System.out.print(hash);
            for(int k=0;k<(2*(i-1)+1);k++)
                System.out.print(" ");
            System.out.print(hash);
            for(int k=0;k<(3-i);k++)
                System.out.print(" ");
            System.out.print(" ");
        }
    }
    private static void print_R(int i){
        if(i==0 || i==3)
            System.out.print("########  ");
        else{
            for(int j = 0; j < 9; j++){
                if(j==0 || j == 1 || j==7 || j==8)
                    System.out.print("#");
                else
                    System.out.print(" ");
            }
            System.out.print(" ");
        }

    }
    private static void print_M(int i){
        if(i<3){
            int n=2;
            for(int k=0;k<(n+i);k++)
                System.out.print("#");
            for(int k=0;k<(2*((3-i)-1)+1);k++)
                System.out.print(" ");
            for(int k=0;k<(n+i);k++)
                System.out.print("#");
            System.out.print(" ");
        }
        else if(i==3){
            System.out.print("## ### ## ");
        }
        else{
            for(int j = 0; j < 9; j++){
                if(j==0 || j == 1 || j==7 || j==8)
                    System.out.print("#");
                else
                    System.out.print(" ");
            }
            System.out.print(" ");
        }
    }
    private static void print_I(int i){
        if(i%6==0)
            System.out.print("#### ");
        else
            System.out.print(" ##  ");
    }
    private static void print_T(int i){
        if(i == 0)
            System.out.print("######## ");
        else
            System.out.print("   ##    ");
    }
    private static void print_O(int i){
        if(i%6==0)
            System.out.print(" #######  ");
        else
            System.out.print("##     ## ");
    }
    public static void main(String[] args) {
        for(int i=0;i<7;i++){
            print_A(i);
            print_R(i);
            print_M(i);
            print_A(i);
            print_R(i);
            print_I(i);
            print_T(i);
            print_T(i);
            print_O(i);
            System.out.println();
        }
    }
}