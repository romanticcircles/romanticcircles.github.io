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

/* __string_template__efc2cdaff4d1665bad6b8132c5716cf1fda008446604bf253994dea97cde2c0f */
class __TwigTemplate_4640e28cb0883a9a8b538f4db14913ca7ae04e47b834d1afd23debb157e976c4 extends \Twig\Template
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
         ";
        // line 5
        if ((($context["delta"] ?? null) == 0)) {
            echo " Reviewed by ";
        }
        // line 6
        echo "         ";
        if ((($context["delta"] ?? null) != 0)) {
            echo ", ";
        }
        // line 7
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_contributors"] ?? null), 7, $this->source), "html", null, true);
        echo " 
         ";
        // line 8
        if ((($context["delta_1"] ?? null) == 0)) {
            echo " Authored by ";
        }
        // line 9
        echo "         ";
        if ((($context["delta_1"] ?? null) != 0)) {
            echo ", ";
        }
        // line 10
        echo "         ";
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 10, $this->source), "html", null, true);
        echo " 
</p>
<div class=\"home-img\">
    ";
        // line 13
        if (($context["field_image"] ?? null)) {
            // line 14
            echo "        ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 14, $this->source), "html", null, true);
            echo "
    ";
        }
        // line 16
        echo "</div>
    
</div>
</a>";
    }

    public function getTemplateName()
    {
        return "__string_template__efc2cdaff4d1665bad6b8132c5716cf1fda008446604bf253994dea97cde2c0f";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  88 => 16,  82 => 14,  80 => 13,  73 => 10,  68 => 9,  64 => 8,  59 => 7,  54 => 6,  50 => 5,  45 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__efc2cdaff4d1665bad6b8132c5716cf1fda008446604bf253994dea97cde2c0f", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 5);
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
