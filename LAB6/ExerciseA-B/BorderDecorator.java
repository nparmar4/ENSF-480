import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class BorderDecorator extends Decorator {

    public BorderDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        super.draw(g);
        Graphics2D g2d = (Graphics2D) g;
        
        Color oldColor = g2d.getColor();
        g2d.setColor(Color.BLACK);
        
        BasicStroke oldStroke = (BasicStroke) g2d.getStroke();
        g2d.setStroke(new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[]{9}, 0));
        
        g2d.drawRect(x, y, width, height);
        
        g2d.setStroke(oldStroke); // Reset stroke to previous setting
        g2d.setColor(oldColor);    // Reset color to previous setting
    }
}
