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

/* __string_template__78fd017e78fca2463d0abd871c072131718f3039d682571697ec1775414ca6ef */
class __TwigTemplate_c69205febfe7d355e2da11c5692c521d4e083c364a7cb579b1e8a0dea2259118 extends \Twig\Template
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
    <h4 class=\"card-title centered\">";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title_1"] ?? null), 3, $this->source), "html", null, true);
        echo "</h4>
     <p class=\"centered\">
         Authored by
         ";
        // line 6
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 6, $this->source), "html", null, true);
        echo " </p>
    <p class=\"centered\">
         Reviewed by
         ";
        // line 9
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 9, $this->source), "html", null, true);
        echo "  </p>
    <a href=\"";
        // line 10
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 10, $this->source), "html", null, true);
        echo "\">
    <div class=\"home-img\">
        ";
        // line 12
        if (($context["field_image"] ?? null)) {
            // line 13
            echo "            ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 13, $this->source), "html", null, true);
            echo "
        ";
        }
        // line 15
        echo "    </div>
    </a>
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__78fd017e78fca2463d0abd871c072131718f3039d682571697ec1775414ca6ef";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  74 => 15,  68 => 13,  66 => 12,  61 => 10,  57 => 9,  51 => 6,  45 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__78fd017e78fca2463d0abd871c072131718f3039d682571697ec1775414ca6ef", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 12);
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
