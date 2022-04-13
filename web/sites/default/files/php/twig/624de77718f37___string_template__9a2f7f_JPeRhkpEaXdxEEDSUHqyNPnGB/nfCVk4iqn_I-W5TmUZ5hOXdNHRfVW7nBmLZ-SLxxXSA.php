<?php

use Twig\Environment;
use Twig\Error\LoaderError;
use Twig\Error\RuntimeError;
use Twig\Extension\SandboxExtension;
use Twig\Markup;
use Twig\Sandbox\SecurityError;
use Twig\Sandbox\SecurityNotAllowedTagError;
use Twig\Sandbox\SecurityNotAllowedFilterError;
use Twig\Sandbox\SecurityNotAllowedFunctionError;
use Twig\Source;
use Twig\Template;

/* __string_template__9a2f7f85615f8fef7b5416eb8f3f3dbce67e5f2ecb6651793ce544f73db1e066 */
class __TwigTemplate_9d6ee8cc98a0eac8b1e16da97b794496d324b71becdd10bd1a2c2e7fa7082a1a extends \Twig\Template
{
    private $source;
    private $macros = [];

    public function __construct(Environment $env)
    {
        parent::__construct($env);

        $this->source = $this->getSourceContext();

        $this->parent = false;

        $this->blocks = [
        ];
        $this->sandbox = $this->env->getExtension('\Twig\Extension\SandboxExtension');
        $this->checkSecurity();
    }

    protected function doDisplay(array $context, array $blocks = [])
    {
        $macros = $this->macros;
        // line 1
        echo "<a href=\"";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 1, $this->source), "html", null, true);
        echo "\">
<div class=\"label_div\">
    <div class=\"tall-card-title\">
    <h4 class=\"centered\">";
        // line 4
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title_1"] ?? null), 4, $this->source), "html", null, true);
        echo "</h4>
     <p class=\"centered\">
         Authored by
         ";
        // line 7
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 7, $this->source), "html", null, true);
        echo " <br>
         Reviewed by
         ";
        // line 9
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 9, $this->source), "html", null, true);
        echo "  </p>
    </div>
    <a href=\"";
        // line 11
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 11, $this->source), "html", null, true);
        echo "\">
    <div class=\"home-img book-img\">
        ";
        // line 13
        if (($context["field_image"] ?? null)) {
            // line 14
            echo "            ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 14, $this->source), "html", null, true);
            echo "
        ";
        }
        // line 16
        echo "    </div>
    </a>
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__9a2f7f85615f8fef7b5416eb8f3f3dbce67e5f2ecb6651793ce544f73db1e066";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  75 => 16,  69 => 14,  67 => 13,  62 => 11,  57 => 9,  52 => 7,  46 => 4,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__9a2f7f85615f8fef7b5416eb8f3f3dbce67e5f2ecb6651793ce544f73db1e066", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 13);
        static $filters = array("escape" => 1);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape'],
                []
            );
        } catch (SecurityError $e) {
            $e->setSourceContext($this->source);

            if ($e instanceof SecurityNotAllowedTagError && isset($tags[$e->getTagName()])) {
                $e->setTemplateLine($tags[$e->getTagName()]);
            } elseif ($e instanceof SecurityNotAllowedFilterError && isset($filters[$e->getFilterName()])) {
                $e->setTemplateLine($filters[$e->getFilterName()]);
            } elseif ($e instanceof SecurityNotAllowedFunctionError && isset($functions[$e->getFunctionName()])) {
                $e->setTemplateLine($functions[$e->getFunctionName()]);
            }

            throw $e;
        }

    }
}
