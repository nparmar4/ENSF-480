import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class ColouredFrameDecorator extends Decorator {
    private int thickness;

    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness) {
        super(cmp, x, y, width, height);
        this.thickness = thickness;
    }

    @Override
    public void draw(Graphics g) {
        super.draw(g); 

        Graphics2D g2d = (Graphics2D) g;
        Color oldColor = g2d.getColor();
        g2d.setColor(Color.RED);

        BasicStroke oldStroke = (BasicStroke) g2d.getStroke();
        g2d.setStroke(new BasicStroke(thickness));

        g2d.drawRect(x, y, width, height);

        g2d.setStroke(oldStroke);
        g2d.setColor(oldColor);
    }
}
