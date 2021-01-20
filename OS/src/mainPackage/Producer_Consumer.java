package mainPackage;

public class Producer_Consumer {
    private static final int buffer_size = 10;

    private static final int PRODUCER = 0;
    private static final int CONSUMER = 1;

    int buffer[] = new int [buffer_size];
    int count = 0;
    int in = 0, out = 0;

    public void print_buffer() {
        for(int i = 0; i < buffer_size; i++) {
            System.out.print(buffer[i]);

        }
        System.out.print("\n");
    }

    public void producer() {
//        while(count == buffer_size);

        if(count == buffer_size) return;

        //critical section start
        double value =Math.random() % 100;
        buffer[in] =(int) value;
        in = (in + 1) % buffer_size;
        System.out.print("Producer\t");
        print_buffer();
        count++;
        //critical section finish
    }

    public void consumer() {
//        while(count == 0);

        if(count == 0) return;

        //critical section start
        int consumed = buffer[out];
        buffer[out] = 0;
        out = (out + 1) % buffer_size;
        System.out.print("Consumer\t");
        print_buffer();
        count--;
        //critical section finish
    }

    public void start () {
        System.out.println("Producer Consumer---------> Start");

        for(int i = 0; i < 100; i++) {
            double iterator = Math.random();
            if((int) iterator %2 == PRODUCER) producer();
            else consumer();
        }
        System.out.println("Last count: "+ count);
        System.out.println("Producer Consumer---------> End");

    }
}
