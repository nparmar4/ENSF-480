import java.awt.AlphaComposite;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;

public class ColouredGlassDecorator extends Decorator {

    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        // Draw the component being decorated
        super.draw(g);

        // Cast to Graphics2D to use advanced features
        Graphics2D g2d = (Graphics2D) g;

        // Save old composite settings
        AlphaComposite oldComposite = (AlphaComposite) g2d.getComposite();

        // Set transparency for green glass effect
        g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 0.5f)); // Increased transparency
        g2d.setColor(new Color(0, 255, 0, 100)); // Adjusted semi-transparent green

        // Draw the "glass" overlay rectangle covering the component
        g2d.fillRect(x, y, width, height);

        // Restore previous composite settings
        g2d.setComposite(oldComposite);
    }
}
