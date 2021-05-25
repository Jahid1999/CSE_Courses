package mainPackage;

public class Peterson {
    int turn;
    boolean flag[] = new boolean[2];
    int i=0,j=1;
    int counter=0;
    int critical_section_variable=13;
    private class iTh extends Thread{ 
        public void run(){
            try{
                do{
                    flag[i]= true;
                    turn=j;
                    while(flag[j]&&turn==j);
                        System.out.println("I is in critical section");
                    critical_section_variable++;
                    System.out.println(critical_section_variable);
                    counter++;
                    System.out.println("counter is "+counter+"\n___________");
                    flag[i]= false;
                }while(counter<100);
            }
            catch(Exception ex){
                ex.printStackTrace();
            }
        }
    }
    private class jTh extends Thread{
        public void run(){
            try{
                do{
                    flag[j]= true;
                    turn=i;
                    while(flag[i]&&turn==i);
                    System.out.println("J is in critical section");
                    critical_section_variable--;
                    System.out.println(critical_section_variable);
                    counter++;
                    System.out.println("counter is "+counter+"\n___________");

                    flag[j]= false;
                }while(counter<100);
            }
            catch(Exception ex){
                ex.printStackTrace();
            }
        }
    }
    public void start(){
        System.out.println("Peterson's Solution---------> Start");
        iTh ITh= new iTh();
        jTh JTh = new jTh();
        ITh.start(); //start process i
        JTh.start(); //start process j
        System.out.println("Peterson's Solution---------> End");

    }
   
}
