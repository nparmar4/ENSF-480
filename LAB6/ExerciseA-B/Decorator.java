import java.awt.Graphics;

public abstract class Decorator implements Component {
    protected Component cmp;
    protected int x;
    protected int y;
    protected int width;
    protected int height;

    public Decorator(Component cmp, int x, int y, int width, int height) {
        this.cmp = cmp;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g);
    }
}
