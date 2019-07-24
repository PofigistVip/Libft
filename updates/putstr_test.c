#include <unistd.h>
#include <string.h>

size_t	ft_strlen(char *str)
{
	char	*ptr;

	ptr = (char*)str;
	while (*ptr++)
		;
	return ((size_t)(ptr - str - 1));
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

// void ft_putstr(char *str)
// {
// 	while (*str)
// 		write(1, str++, 1);
// }

int	main(void)
{
	char	*str;
	int		i;
	int		max;

	str = " Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nulla nec nulla semper, sagittis lorem eget, tempor nisi. Vivamus nec vehicula ipsum. Aenean quis iaculis odio. Donec rutrum sem et interdum tincidunt. Integer finibus maximus neque sit amet venenatis. Nulla sit amet vulputate quam, quis aliquam diam. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus porta urna a tortor cursus maximus ac ut nulla. Donec ut accumsan enim, sed tincidunt massa. Aliquam erat volutpat. Ut placerat neque ut augue fringilla mollis. Cras mollis et mauris ut molestie. Maecenas at feugiat leo. Mauris odio justo, ultricies pretium tempor quis, tincidunt eget ex.Sed sed massa mollis, laoreet diam sit amet, pellentesque tortor. Aenean eu diam a libero ornare cursus. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus ac ex lobortis, dignissim nisi vitae, tristique mauris. Aliquam erat volutpat. Curabitur rhoncus turpis nulla, at mattis turpis malesuada nec. Integer et sapien tortor. Pellentesque pulvinar porttitor arcu, sed luctus urna tempor vitae. Aliquam aliquam orci vel velit scelerisque, hendrerit condimentum neque luctus. Sed vestibulum dui arcu, eu feugiat elit accumsan nec. Sed sed urna quis urna tempor sodales ut eget est. Praesent ut urna porttitor, euismod leo malesuada, maximus elit. In nibh ipsum, euismod ac dictum non, imperdiet eget metus.Nunc sem dolor, dapibus id feugiat quis, pellentesque sit amet eros. Etiam ut tempor diam. Etiam lobortis ipsum orci, eu pretium urna vulputate commodo. Mauris ullamcorper lorem ac dolor tristique venenatis. Phasellus sed eros vitae augue dictum dapibus. Praesent vel pretium urna. Vestibulum vitae egestas turpis.Mauris porttitor quam a elit pretium, id accumsan tortor sagittis. Nunc suscipit laoreet sem ut commodo. Duis lobortis sapien et purus fermentum, in efficitur nulla posuere. Vivamus aliquam congue posuere. Aenean at egestas sem. Nullam semper gravida dignissim. Etiam bibendum lectus purus, at sagittis nulla rutrum eu. Nam venenatis ut ex sed egestas. Nullam aliquet, nisi eget pharetra sollicitudin, justo nisl accumsan tellus, euismod pharetra tortor lectus in turpis.Nulla hendrerit metus purus. Nunc vestibulum tincidunt arcu auctor semper. In pretium aliquam hendrerit. Praesent pellentesque purus lectus. Cras volutpat metus eleifend urna egestas, vitae tincidunt orci tempor. Nullam non justo metus. Ut porta aliquam vestibulum. Curabitur mattis convallis nibh, ut convallis nunc egestas condimentum. Suspendisse sed urna bibendum, interdum ligula id, laoreet nunc. ";
	max = 10000;
	i = 0;
	while (++i < max)
		ft_putstr(str);
	return (0);
}