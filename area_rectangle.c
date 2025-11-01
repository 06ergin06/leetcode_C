int	ft_fabs(int x)
{
	if (x < 0 && x != INT_MIN)
		x = -x;
	return (x);
	return (0);
}
int	max(int x, int y)
{
	if (x > y)
		return (x);
	return (y);
}
int	min(int x, int y)
{
	if (x > y)
		return (y);
	return (x);
}
int	area(int x1, int x2, int y1, int y2)
{
	return (ft_fabs(x2 - x1) * ft_fabs(y2 - y1));
}
int	computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2,
		int by2)
{
	int	area1;
	int	area2;
	int	repArea;

	repArea = 0;
	area1 = area(ax1, ax2, ay1, ay2);
	area2 = area(bx1, bx2, by1, by2);
	if (!(ax2 < bx1 || bx2 < ax1 || ay2 < by1 || by2 < ay1))
	{
		repArea = area(max(ax1, bx1), min(ax2, bx2), max(ay1, by1), min(ay2,
					by2));
	}
	return ((area1 + area2) - repArea);
}
