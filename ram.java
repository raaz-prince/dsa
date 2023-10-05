import java.util.ArrayList;

public class ram {
    static class edge {
         int initial;
        int finalDest;
        edge(int init, int finalDest) {
            this.initial= init;
            this.finalDest=finalDest;
        }
       
    }
    public static void main(String[] args) {
        ArrayList<edge> graph[]=new ArrayList[3];
        for(int i=0; i<graph.length ; i++) {
            graph[i]=new ArrayList<edge>();
        }
        graph[0].add(new edge(3,4));
        graph[1].add(new edge(1,2));
        graph[1].add(new edge(1,3 ));
        for(int i=0; i<graph[1].size(); i++) {
            edge e = graph[1].get(i);
            System.out.println(e.initial +""+e.finalDest);
        }
    }
}