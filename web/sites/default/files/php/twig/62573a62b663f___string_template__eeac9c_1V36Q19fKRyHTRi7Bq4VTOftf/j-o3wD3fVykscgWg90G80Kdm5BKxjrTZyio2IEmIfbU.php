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

/* __string_template__eeac9ca2bd37acaf80c2006fb05781ddc7cc3171b0a1e831fd5d630b23d61b1e */
class __TwigTemplate_0527aeb056c05db64f9f091ad2bfc86d170b54b6104f329b4c8aa064199ef557 extends \Twig\Template
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
        echo "<div class = \"panel\" >
<div class=\"square effect6\">
";
        // line 3
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["field_image"] ?? null), 3, $this->source), "html", null, true);
        echo " 
<div class=\"info\">
<a href=\"";
        // line 5
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["view_node"] ?? null), 5, $this->source), "html", null, true);
        echo "\">
<h3> 
    ";
        // line 7
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, twig_striptags($this->sandbox->ensureToStringAllowed(($context["field_author_ref"] ?? null), 7, $this->source)), "html", null, true);
        echo " 
    ";
        // line 8
        if (($context["field_collaborator"] ?? null)) {
            // line 9
            echo "    <br>In collaboration with ";
            echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, twig_striptags($this->sandbox->ensureToStringAllowed(($context["field_collaborator"] ?? null), 9, $this->source)), "html", null, true);
            echo "
    ";
        }
        // line 11
        echo "</h3>
<p> ";
        // line 12
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, twig_striptags($this->sandbox->ensureToStringAllowed(($context["field_description"] ?? null), 12, $this->source)), "html", null, true);
        echo " </p>
</a>
</div>
</div>
<h4>";
        // line 16
        echo $this->extensions['Drupal\Core\Template\TwigExtension']->escapeFilter($this->env, $this->sandbox->ensureToStringAllowed(($context["title"] ?? null), 16, $this->source), "html", null, true);
        echo "</h4>
</div>";
    }

    public function getTemplateName()
    {
        return "__string_template__eeac9ca2bd37acaf80c2006fb05781ddc7cc3171b0a1e831fd5d630b23d61b1e";
    }

    public function isTraitable()
    {
        return false;
    }

    public function getDebugInfo()
    {
        return array (  75 => 16,  68 => 12,  65 => 11,  59 => 9,  57 => 8,  53 => 7,  48 => 5,  43 => 3,  39 => 1,);
    }

    public function getSourceContext()
    {
        return new Source("", "__string_template__eeac9ca2bd37acaf80c2006fb05781ddc7cc3171b0a1e831fd5d630b23d61b1e", "");
    }
    
    public function checkSecurity()
    {
        static $tags = array("if" => 8);
        static $filters = array("escape" => 3, "striptags" => 7);
        static $functions = array();

        try {
            $this->sandbox->checkSecurity(
                ['if'],
                ['escape', 'striptags'],
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
