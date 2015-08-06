package cn.hkjdy.game.configuration;

import org.springframework.context.MessageSource;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.ComponentScan;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.support.ResourceBundleMessageSource;
import org.springframework.web.servlet.ViewResolver;
import org.springframework.web.servlet.config.annotation.EnableWebMvc;
import org.springframework.web.servlet.view.InternalResourceViewResolver;
import org.springframework.web.servlet.view.JstlView;

/**
 * @Configuration marks this class as configuration class as mentioned above & ComponentScan referes to package locations to find the associated beans.
 * @EnableWebMvc is equivalent to mvc:annotation-driven in XML.
 * Method viewResolver configures a view resolver to identify the real view.
 */


/**
* @author dengyi
* @date 2015年8月5日 下午5:13:54
*/

@Configuration
@EnableWebMvc
@ComponentScan(basePackages = "cn.hkjdy.game")
public class AppConfig {
	@Bean
    public ViewResolver viewResolver() {
        InternalResourceViewResolver viewResolver = new InternalResourceViewResolver();
        viewResolver.setViewClass(JstlView.class);
        viewResolver.setPrefix("/WEB-INF/views/");
        viewResolver.setSuffix(".jsp");
        return viewResolver;
    }
     
    @Bean
    public MessageSource messageSource() {
        ResourceBundleMessageSource messageSource = new ResourceBundleMessageSource();
        messageSource.setBasename("messages");
        return messageSource;
    }
}
