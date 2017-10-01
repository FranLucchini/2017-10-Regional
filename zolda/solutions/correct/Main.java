import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	static int n, k;
	static Point[] input;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		n = Integer.parseInt(st.nextToken());
		k = Integer.parseInt(st.nextToken());
		input = new Point[n];
		for (int i = 0; i < n; i++) {
			st = new StringTokenizer(br.readLine());
			input[i] = new Point(Long.parseLong(st.nextToken()), Long.parseLong(st.nextToken()));
		}
		Arrays.sort(input);
		long l = 0;
		long r = 2000000000;
		while (l < r) {
			long mid = (l + r) / 2;
			if (calculate(mid) < k)
				l = mid + 1;
			else
				r = mid;
		}
		System.out.println(l);
	}

	static int calculate(long v) {
		int l = -1;
		int r = n - 1;
		while (l < r) {
			int mid = (l + r + 1) / 2;
			Point p = input[mid];
			if (p.sqRadius() > v * v) r = mid-1;
			else l = mid;
		}
		return l + 1;
	}
}

class Point implements Comparable<Point> {
	long x, y;

	Point(long x, long y) {
		this.x = x;
		this.y = y;
	}

	@Override
	public int compareTo(Point o) {
		return Long.compare(sqRadius(), o.sqRadius());
	}
	
	long sqRadius() {
		return x * x + y * y;
	}

}